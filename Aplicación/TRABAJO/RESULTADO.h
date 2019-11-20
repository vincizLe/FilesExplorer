#pragma once

namespace TRABAJO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RESULTADO
	/// </summary>
	public ref class RESULTADO : public System::Windows::Forms::Form
	{
	public:
		RESULTADO(String^dato)
		{
			InitializeComponent();
			this->daa = dato;
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RESULTADO()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

	protected:

	private:
		String^ daa;
	private: System::Windows::Forms::Label^  NOMBRE_R;


	private: System::Windows::Forms::Label^  A_PATERNO;

	private: System::Windows::Forms::Label^  A_MATERNO;

	private: System::Windows::Forms::Label^  N_IDENTIFICACION;

	private: System::Windows::Forms::Label^  edad_r;
	private: System::Windows::Forms::Label^  E_CIVIL;
	private: System::Windows::Forms::Label^  EDAD;
	private: System::Windows::Forms::Label^  SEXO;


	private: System::Windows::Forms::Label^  F_NACIMIENTO;
	private: System::Windows::Forms::Label^  label_PrimerApellido;
	private: System::Windows::Forms::Label^  label_SegundoApellido;
	private: System::Windows::Forms::Label^  label_Nombre;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label_FechaNaci;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label_CUI;
	private: System::Windows::Forms::Label^  Title;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
			 /// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RESULTADO::typeid));
			this->NOMBRE_R = (gcnew System::Windows::Forms::Label());
			this->A_PATERNO = (gcnew System::Windows::Forms::Label());
			this->A_MATERNO = (gcnew System::Windows::Forms::Label());
			this->N_IDENTIFICACION = (gcnew System::Windows::Forms::Label());
			this->edad_r = (gcnew System::Windows::Forms::Label());
			this->E_CIVIL = (gcnew System::Windows::Forms::Label());
			this->EDAD = (gcnew System::Windows::Forms::Label());
			this->SEXO = (gcnew System::Windows::Forms::Label());
			this->F_NACIMIENTO = (gcnew System::Windows::Forms::Label());
			this->label_PrimerApellido = (gcnew System::Windows::Forms::Label());
			this->label_SegundoApellido = (gcnew System::Windows::Forms::Label());
			this->label_Nombre = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_FechaNaci = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_CUI = (gcnew System::Windows::Forms::Label());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// NOMBRE_R
			// 
			this->NOMBRE_R->AutoSize = true;
			this->NOMBRE_R->Location = System::Drawing::Point(167, 225);
			this->NOMBRE_R->Name = L"NOMBRE_R";
			this->NOMBRE_R->Size = System::Drawing::Size(10, 13);
			this->NOMBRE_R->TabIndex = 1;
			this->NOMBRE_R->Text = L".";
			// 
			// A_PATERNO
			// 
			this->A_PATERNO->AutoSize = true;
			this->A_PATERNO->Location = System::Drawing::Point(167, 103);
			this->A_PATERNO->Name = L"A_PATERNO";
			this->A_PATERNO->Size = System::Drawing::Size(10, 13);
			this->A_PATERNO->TabIndex = 3;
			this->A_PATERNO->Text = L".";
			// 
			// A_MATERNO
			// 
			this->A_MATERNO->AutoSize = true;
			this->A_MATERNO->Location = System::Drawing::Point(167, 168);
			this->A_MATERNO->Name = L"A_MATERNO";
			this->A_MATERNO->Size = System::Drawing::Size(10, 13);
			this->A_MATERNO->TabIndex = 5;
			this->A_MATERNO->Text = L".";
			// 
			// N_IDENTIFICACION
			// 
			this->N_IDENTIFICACION->AutoSize = true;
			this->N_IDENTIFICACION->Location = System::Drawing::Point(43, 278);
			this->N_IDENTIFICACION->Name = L"N_IDENTIFICACION";
			this->N_IDENTIFICACION->Size = System::Drawing::Size(10, 13);
			this->N_IDENTIFICACION->TabIndex = 7;
			this->N_IDENTIFICACION->Text = L".";
			// 
			// edad_r
			// 
			this->edad_r->AutoSize = true;
			this->edad_r->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->edad_r->Location = System::Drawing::Point(365, 137);
			this->edad_r->Name = L"edad_r";
			this->edad_r->Size = System::Drawing::Size(37, 13);
			this->edad_r->TabIndex = 9;
			this->edad_r->Text = L"EDAD";
			// 
			// E_CIVIL
			// 
			this->E_CIVIL->AutoSize = true;
			this->E_CIVIL->Location = System::Drawing::Point(366, 224);
			this->E_CIVIL->Name = L"E_CIVIL";
			this->E_CIVIL->Size = System::Drawing::Size(10, 13);
			this->E_CIVIL->TabIndex = 10;
			this->E_CIVIL->Text = L".";
			// 
			// EDAD
			// 
			this->EDAD->AutoSize = true;
			this->EDAD->Location = System::Drawing::Point(368, 168);
			this->EDAD->Name = L"EDAD";
			this->EDAD->Size = System::Drawing::Size(10, 13);
			this->EDAD->TabIndex = 11;
			this->EDAD->Text = L".";
			// 
			// SEXO
			// 
			this->SEXO->AutoSize = true;
			this->SEXO->Location = System::Drawing::Point(369, 101);
			this->SEXO->Name = L"SEXO";
			this->SEXO->Size = System::Drawing::Size(10, 13);
			this->SEXO->TabIndex = 12;
			this->SEXO->Text = L".";
			this->SEXO->Click += gcnew System::EventHandler(this, &RESULTADO::SEXO_Click);
			// 
			// F_NACIMIENTO
			// 
			this->F_NACIMIENTO->AutoSize = true;
			this->F_NACIMIENTO->Location = System::Drawing::Point(256, 278);
			this->F_NACIMIENTO->Name = L"F_NACIMIENTO";
			this->F_NACIMIENTO->Size = System::Drawing::Size(10, 13);
			this->F_NACIMIENTO->TabIndex = 15;
			this->F_NACIMIENTO->Text = L".";
			// 
			// label_PrimerApellido
			// 
			this->label_PrimerApellido->AutoSize = true;
			this->label_PrimerApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PrimerApellido->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_PrimerApellido->Location = System::Drawing::Point(167, 74);
			this->label_PrimerApellido->Name = L"label_PrimerApellido";
			this->label_PrimerApellido->Size = System::Drawing::Size(100, 16);
			this->label_PrimerApellido->TabIndex = 44;
			this->label_PrimerApellido->Text = L"Primer Apellido";
			// 
			// label_SegundoApellido
			// 
			this->label_SegundoApellido->AutoSize = true;
			this->label_SegundoApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_SegundoApellido->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_SegundoApellido->Location = System::Drawing::Point(167, 134);
			this->label_SegundoApellido->Name = L"label_SegundoApellido";
			this->label_SegundoApellido->Size = System::Drawing::Size(116, 16);
			this->label_SegundoApellido->TabIndex = 55;
			this->label_SegundoApellido->Text = L"Segundo Apellido";
			// 
			// label_Nombre
			// 
			this->label_Nombre->AutoSize = true;
			this->label_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Nombre->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_Nombre->Location = System::Drawing::Point(167, 198);
			this->label_Nombre->Name = L"label_Nombre";
			this->label_Nombre->Size = System::Drawing::Size(88, 16);
			this->label_Nombre->TabIndex = 56;
			this->label_Nombre->Text = L"Pre Nombres";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(365, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Sexo";
			// 
			// label_FechaNaci
			// 
			this->label_FechaNaci->AutoSize = true;
			this->label_FechaNaci->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_FechaNaci->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_FechaNaci->Location = System::Drawing::Point(224, 251);
			this->label_FechaNaci->Name = L"label_FechaNaci";
			this->label_FechaNaci->Size = System::Drawing::Size(136, 16);
			this->label_FechaNaci->TabIndex = 66;
			this->label_FechaNaci->Text = L"Fecha de Nacimiento";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(365, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 67;
			this->label3->Text = L"Estado Civil";
			// 
			// label_CUI
			// 
			this->label_CUI->AutoSize = true;
			this->label_CUI->BackColor = System::Drawing::SystemColors::Window;
			this->label_CUI->Cursor = System::Windows::Forms::Cursors::Default;
			this->label_CUI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_CUI->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_CUI->Location = System::Drawing::Point(61, 251);
			this->label_CUI->Name = L"label_CUI";
			this->label_CUI->Size = System::Drawing::Size(31, 16);
			this->label_CUI->TabIndex = 68;
			this->label_CUI->Text = L"DNI";
			// 
			// Title
			// 
			this->Title->BackColor = System::Drawing::Color::Cyan;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->Title->Location = System::Drawing::Point(0, 0);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(523, 48);
			this->Title->TabIndex = 69;
			this->Title->Text = L"Documento Nacional de Identidad Electrónico";
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 74);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(138, 163);
			this->flowLayoutPanel1->TabIndex = 70;
			// 
			// RESULTADO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(521, 312);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->label_CUI);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label_FechaNaci);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_Nombre);
			this->Controls->Add(this->label_SegundoApellido);
			this->Controls->Add(this->label_PrimerApellido);
			this->Controls->Add(this->F_NACIMIENTO);
			this->Controls->Add(this->SEXO);
			this->Controls->Add(this->EDAD);
			this->Controls->Add(this->E_CIVIL);
			this->Controls->Add(this->edad_r);
			this->Controls->Add(this->N_IDENTIFICACION);
			this->Controls->Add(this->A_MATERNO);
			this->Controls->Add(this->A_PATERNO);
			this->Controls->Add(this->NOMBRE_R);
			this->Name = L"RESULTADO";
			this->Text = L"RESULTADO";
			this->Load += gcnew System::EventHandler(this, &RESULTADO::RESULTADO_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
		void mostrar_r(String^ edad, String^ dni, String^ name, String^ p_apellido, String^ s_apellido, String^ sexo, String^ estado_civil, String^ fecha_nacimiento) {
			NOMBRE_R->Text = name;
			EDAD->Text = edad;
			A_PATERNO->Text = p_apellido;
			A_MATERNO->Text = s_apellido;
			N_IDENTIFICACION->Text = dni;
			SEXO->Text = sexo;
			E_CIVIL->Text = estado_civil;
			F_NACIMIENTO->Text = fecha_nacimiento;
		}
	private: System::Void RESULTADO_Load(System::Object^  sender, System::EventArgs^  e) {
		String^ DNI_F = daa;
		std::string DNI;
		MarshalString(DNI_F, DNI);
		std::ifstream abrir;
		ARBOL* arbol = new ARBOL();
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
		clave = hash_clave_dni(DNI);
		PERSONA* persona;
		NODO* puntero;
		puntero = arbol->buscar(clave);
		if (puntero != NULL) {
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
					String^ P_APELLIDO_R = gcnew String(p_apellido.c_str());
					String^ S_APELLIDO_R = gcnew String(s_apellido.c_str());
					String^ NOMBRE_R= gcnew String(name.c_str());
					String^ DNI_R = gcnew String(dni.c_str());
					String^ SEXO_R = gcnew String(sexo.c_str());
					String^ ESTADO_CIVIL_R = gcnew String(estado_civil.c_str());
					String^ FECHA_NACIMIENTO_R = gcnew String(fecha_nacimiento.c_str());
					String^ EDAD_R = Convert::ToString(edad);
					mostrar_r(EDAD_R, DNI_R, NOMBRE_R, P_APELLIDO_R, S_APELLIDO_R, SEXO_R, ESTADO_CIVIL_R, FECHA_NACIMIENTO_R);
				}
				abrir >> name;
			}
			abrir.close();
		}
		else
		{
			MessageBox::Show("NO EXISTE");
			Close();
		}
		
	}
	private: System::Void SEXO_Click(System::Object^  sender, System::EventArgs^  e) {
	}

};
}
