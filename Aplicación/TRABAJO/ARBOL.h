#pragma once
#ifndef  _ARBOL_H_
#define  _ARBOL_H_
#include"NODO.h"

class ARBOL {
private:
	NODO* raiz;
	int cantidad = 0;
	int altura(NODO* nodo) {
		if (nodo == NULL) {
			return 0;
		}
		else {
			return nodo->obtener_altura();
		}
	}
	void rotar_derecha(NODO*& nodo) {
		NODO* puntero = nodo->obtener_izquierda();
		nodo->agregar_izquierda(puntero->obtener_derecha());
		puntero->agregar_derecha(nodo);
		nodo = puntero;
	}
	void rotar_izquierda(NODO*& nodo) {
		NODO* puntero = nodo->obtener_derecha();
		nodo->agregar_derecha(puntero->obtener_izquierda());
		puntero->agregar_izquierda(nodo);
		nodo = puntero;
	}
	void balancear(NODO*& nodo) {
		int hi = altura(nodo->obtener_izquierda());
		int hd = altura(nodo->obtener_derecha());
		int factor = hd - hi;
		if (factor > 1) {
			int h_i = altura(nodo->obtener_derecha()->obtener_izquierda());
			int h_d = altura(nodo->obtener_derecha()->obtener_derecha());
			if (h_i > h_d) {
				rotar_derecha(nodo->obtener_derecha());
			}
			rotar_izquierda(nodo);
		}
		if (factor < -1) {
			int h_i = altura(nodo->obtener_izquierda()->obtener_derecha());
			int h_d = altura(nodo->obtener_izquierda()->obtener_izquierda());
			if (h_i < h_d) {
				rotar_izquierda(nodo->obtener_izquierda());
			}
			rotar_derecha(nodo);
		}
		hi = altura(nodo->obtener_izquierda());
		hd = altura(nodo->obtener_derecha());
		nodo->agregar_altura(1 + ((hi > hd) ? hi : hd));
	}
	void _insertar(NODO*& nodo, std::string clave, std::string direccion) {
		if (nodo == NULL) {
			nodo = new NODO();
			nodo->agregar_clave(clave);
			nodo->agregar_direccion(direccion);
			cantidad++;
		}
		else if (clave >= nodo->obtener_clave()) {
			_insertar(nodo->obtener_derecha(), clave, direccion);
		}
		else if (clave < nodo->obtener_clave()) {
			_insertar(nodo->obtener_izquierda(), clave, direccion);
		}
		balancear(nodo);
	}
	NODO*& _buscar(NODO*& nodo, std::string clave) {
		if (nodo == NULL)return nodo;
		else {
			if (clave == nodo->obtener_clave()) {
				return nodo;
			}
			else if (clave < nodo->obtener_clave()) {
				return _buscar(nodo->obtener_izquierda(), clave);
			}
			else {
				return _buscar(nodo->obtener_derecha(), clave);
			}
		}
	}
public:
	ARBOL() {
		this->raiz = NULL;
		this->cantidad = 0;
	}
	void insertar(std::string clave, std::string direccion) {
		_insertar(raiz, clave, direccion);
	}
	NODO*& buscar(std::string clave) {
		return _buscar(raiz, clave);
	}
	void cargar_nodo(NODO*& nodo, PERSONA* persona) {
		nodo->agregar_persona(persona);
	}
	void mostrar(NODO*& nodo) {
		std::cout << "nombre : " << nodo->obtener_persona()->obtener_nombre() << std::endl;
		std::cout << "edad  : " << nodo->obtener_persona()->obtener_edad() << std::endl;
		std::cout << " apellido  :  " << nodo->obtener_persona()->obtener_p_apellido() << std::endl;
		std::cout << " apellido  :  " << nodo->obtener_persona()->obtener_s_apellido() << std::endl;
		std::cout << " sexo  :  " << nodo->obtener_persona()->obtener_sexo() << std::endl;
		std::cout << " estado civil  :  " << nodo->obtener_persona()->obtener_estado_civil() << std::endl;
		std::cout << " fecha nacimiento  :  " << nodo->obtener_persona()->obtener_fecha_nacimiento() << std::endl;
		std::cout << " dni  :  " << nodo->obtener_persona()->obtener_dni() << std::endl;
	}

	NODO*& obtener_raiz() {
		return raiz;
	}

};
#endif // ! _ARBOL_H_
