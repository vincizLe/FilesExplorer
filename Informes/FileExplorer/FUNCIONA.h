#pragma once
#include"ARBOL.h"
#include<fstream>

using namespace System::IO;
using namespace System;




void agregar(std::ofstream& op) {
	std::string rut = "RUTA\\";
	std::string nombre = "";
	std::string p_apellido = "";
	std::string s_apellido = "";
	std::string sexo = "";
	std::string estado_civil = "";
	std::string fecha_nacimiento = "";
	std::string dni = "";
	int edad;
	std::cout << "ingrese dni " << std::endl;
	std::cin >> dni;
	op.open(rut + dni + ".txt", std::ios::out | std::ios::app);
	std::cout << "ingrese nombre :" << std::endl;
	std::cin >> nombre;
	std::cout << "ingrese apellido paterno :" << std::endl;
	std::cin >> p_apellido;
	std::cout << "ingrese apellido materno :" << std::endl;
	std::cin >> s_apellido;
	std::cout << "ingrese sexo :" << std::endl;
	std::cin >> sexo;
	std::cout << "ingrese estado civil :" << std::endl;
	std::cin >> estado_civil;
	std::cout << "ingrese edad :" << std::endl;
	std::cin >> edad;
	std::cout << "ingrese fecha de nacimiento : " << std::endl;
	std::cin >> fecha_nacimiento;
	op << nombre << std::endl;
	op << p_apellido << std::endl;
	op << s_apellido << std::endl;
	op << dni << std::endl;
	op << sexo << std::endl;
	op << edad << std::endl;
	op << estado_civil << std::endl;
	op << fecha_nacimiento << std::endl;
	op.close();
}
std::string hash_clave(std::string nombre) {

	return nombre + std::to_string(nombre.size());
}

std::string hash_key(std::string direccion) {
	std::ifstream abrir;
	std::string nombre;
	std::string hash;
	abrir.open(direccion, std::ios::in | std::ios::app);
	abrir >> nombre;
	hash = hash_clave(nombre);
	abrir.close();
	return hash;
}

std::string hash_clave_dni(std::string dni) {
	return dni;
}
std::string hash_key_dni(std::string direccion) {
	std::ifstream abrir;
	int edad;
	std::string nombre;
	std::string p_apellido;
	std::string s_apellido;
	std::string dni;
	std::string sexo;
	std::string estado_civil;
	std::string fecha_nacimiento;
	std::string name;
	std::string clave;
	abrir.open(direccion, std::ios::in | std::ios::app);
	abrir >> nombre;
	while (!abrir.eof())
	{
		abrir >> p_apellido;
		abrir >> s_apellido;
		abrir >> dni;
		abrir >> sexo;
		abrir >> edad;
		abrir >> estado_civil;
		abrir >> fecha_nacimiento;
		clave = hash_clave(dni);
		abrir >> name;
	}
	abrir.close();
	return clave;
}
void MarshalString(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void MarshalString(String^ s, std::wstring& os) {
	using namespace Runtime::InteropServices;
	const wchar_t* chars =
		(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void CARGAR(ARBOL*& arbol) {
	array<String^>^ documentos = Directory::GetFiles("D:\\Ideas\\Proyecto000\\Proyecto000\\");

	for each (String ^ documento in documentos)
	{
		std::string dir;
		std::string hash;
		MarshalString(documento, dir);
		hash = hash_key(dir);
		arbol->insertar(hash, dir);
	}
}
void CARGAR_DNI(ARBOL*& arbol) {
	array<String^>^ documentos = Directory::GetFiles("D:\\Ideas\\Proyecto000\\Proyecto000\\");

	for each (String ^ documento in documentos)
	{
		std::string dir;
		std::string hash;
		MarshalString(documento, dir);
		hash = hash_key_dni(dir);
		arbol->insertar(hash, dir);
	}
}

std::string BUSCAR(ARBOL* arbol, std::ifstream& abrir, std::string nombre) {
	CARGAR(arbol);
	int edad;
	std::string p_apellido;
	std::string s_apellido;
	std::string dni;
	std::string sexo;
	std::string estado_civil;
	std::string fecha_nacimiento;
	std::string name;
	std::string clave;
	std::string direccion;
	clave = hash_clave(nombre);
	PERSONA* persona;
	NODO* puntero;
	puntero = arbol->buscar(clave);
	direccion = puntero->obtener_direccion();
	abrir.open(direccion, std::ios::in | std::ios::app);
	abrir >> name;
	while (!abrir.eof()) {
		abrir >> p_apellido;
		abrir >> s_apellido;
		abrir >> dni;
		abrir >> sexo;
		abrir >> edad;
		abrir >> estado_civil;
		abrir >> fecha_nacimiento;
		persona = new PERSONA(edad, dni, name, p_apellido, s_apellido, sexo, estado_civil, fecha_nacimiento);
		arbol->cargar_nodo(puntero, persona);
		arbol->mostrar(puntero);
		abrir >> name;
	}
	abrir.close();
	return direccion;
}

std::string BUSCAR_DNI(ARBOL* arbol, std::ifstream& abrir, std::string DNI) {
	CARGAR_DNI(arbol);
	int edad;
	std::string p_apellido;
	std::string s_apellido;
	std::string dni;
	std::string sexo;
	std::string estado_civil;
	std::string fecha_nacimiento;
	std::string name;
	std::string clave;
	std::string direccion;
	clave = hash_clave(DNI);
	PERSONA* persona;
	NODO* puntero;
	puntero = arbol->buscar(clave);
	direccion = puntero->obtener_direccion();
	abrir.open(direccion, std::ios::in | std::ios::app);
	abrir >> name;
	while (!abrir.eof()) {
		abrir >> p_apellido;
		abrir >> s_apellido;
		abrir >> dni;
		abrir >> sexo;
		abrir >> edad;
		abrir >> estado_civil;
		abrir >> fecha_nacimiento;
		persona = new PERSONA(edad, dni, name, p_apellido, s_apellido, sexo, estado_civil, fecha_nacimiento);
		arbol->cargar_nodo(puntero, persona);
		if (DNI == puntero->obtener_persona()->obtener_dni()) {
			arbol->mostrar(puntero);
		}
		abrir >> name;
	}
	abrir.close();
	return dni;
}