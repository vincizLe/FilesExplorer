#pragma once
#ifndef  _NODO_H_
#define  _NODO_H_
#include"PERSONA.h"

class NODO {
private:
	std::string direccion;
	std::string clave;
	int altura;
	PERSONA* persona;
	NODO* izquierda;
	NODO* derecha;
public:
	NODO() {
		this->clave = "";
		this->direccion = "";
		this->altura = 0;
		this->persona = NULL;
		this->derecha = NULL;
		this->izquierda = NULL;
	}
	~NODO() {}
	void agregar_clave(std::string clave) {
		this->clave = clave;
	}
	void agregar_altura(int altura) {
		this->altura = altura;
	}
	void agregar_izquierda(NODO*& izquierda) {
		this->izquierda = izquierda;
	}
	void agregar_derecha(NODO*& derecha) {
		this->derecha = derecha;
	}
	void agregar_persona(PERSONA* persona) {
		this->persona = persona;
	}
	void agregar_direccion(std::string direccion) {
		this->direccion = direccion;
	}
	std::string obtener_direccion() { return direccion; }
	std::string obtener_clave() { return clave; }
	int obtener_altura() { return altura; }
	NODO*& obtener_izquierda() { return izquierda; }
	NODO*& obtener_derecha() { return derecha; }
	PERSONA* obtener_persona() { return persona; }

};
#endif // ! _NODO_H_
