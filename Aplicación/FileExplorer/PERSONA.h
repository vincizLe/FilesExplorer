#pragma once
#ifndef  _PERSONA_H_
#define  _PERSONA_H_
#include<iostream>
#include<string>

class PERSONA {
private:
	int edad;
	std::string dni;
	std::string nombre;
	std::string p_apellido;
	std::string s_apellido;
	std::string sexo;
	std::string estado_civil;
	std::string fecha_nacimiento;
public:
	PERSONA(int edad, std::string dni, std::string nombre, std::string p_apellido, std::string s_apellido, std::string sexo, std::string estado_civl, std::string fecha_nacimiento) {
		this->edad = edad;
		this->dni = dni;
		this->nombre = nombre;
		this->p_apellido = p_apellido;
		this->s_apellido = s_apellido;
		this->sexo = sexo;
		this->estado_civil = estado_civl;
		this->fecha_nacimiento = fecha_nacimiento;
	}
	~PERSONA() {}

	int obtener_edad() { return edad; }
	std::string obtener_dni() { return dni; }
	std::string obtener_nombre() { return nombre; }
	std::string obtener_p_apellido() { return p_apellido; }
	std::string obtener_s_apellido() { return s_apellido; }
	std::string obtener_sexo() { return sexo; }
	std::string obtener_estado_civil() { return estado_civil; }
	std::string obtener_fecha_nacimiento() { return fecha_nacimiento; }

};


#endif // ! _PERSONA_H_
