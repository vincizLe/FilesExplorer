#pragma once
#ifndef _FUNCIONES_H_
#define _FUNCIONES_H_
#include<iostream>
#include<fstream>
#include<string>
#include"ARBOL.h"

using namespace System::IO;
using namespace System;



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
		clave = hash_clave_dni(dni);
		abrir >> name;
	}
	abrir.close();
	return clave;
}
void MarshalString(String ^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void MarshalString(String ^ s, std::wstring& os) {
	using namespace Runtime::InteropServices;
	const wchar_t* chars =
		(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}
void CARGAR_DNI(ARBOL*& arbol) {
	array<String^>^documentos = Directory::GetFiles("C:\\Users\\user\\Downloads\\Pruebs\\TRABAJO\\TRABAJO\\RUTA\\");

	for each(String^ documento in documentos)
	{
		std::string dir;
		std::string hash;
		MarshalString(documento, dir);
		hash = hash_key_dni(dir);
		arbol->insertar(hash, dir);
	}
}
std::string hash_clave(std::string nombre, std::string direccion) {
	std::string aux = direccion.substr(52, 65);
	std::string aux2 = aux.substr(0, 9);
	return nombre + std::to_string(nombre.size()) + aux2;
}

std::string hash_key(std::string direccion) {
	std::ifstream abrir;
	std::string nombre;
	std::string hash;
	abrir.open(direccion, std::ios::in | std::ios::app);
	abrir >> nombre;
	hash = hash_clave(nombre, direccion);
	abrir.close();
	return hash;
}

void CARGAR_NOMBRE(ARBOL*& arbol) {
	array<String^>^documentos = Directory::GetFiles("C:\\Users\\user\\Downloads\\Pruebs\\TRABAJO\\TRABAJO\\RUTA\\");

	for each(String^ documento in documentos)
	{
		std::string dir;
		std::string hash;
		MarshalString(documento, dir);
		hash = hash_key(dir);
		arbol->insertar(hash, dir);
	}
}
void agregar(std::ofstream &op, int edad, std::string nombre, std::string p_apellido, std::string s_apellido, std::string sexo, std::string estado_civil, std::string fecha_nacimiento, std::string dni) {
	std::string rut = "RUTA\\";

	op.open(rut + dni + ".txt", std::ios::out | std::ios::app);	
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


#endif // !_FUNCIONES_H_
