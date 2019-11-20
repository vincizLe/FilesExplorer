#pragma once
#include"FUNCIONES.h"
namespace TRABAJO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de REGISTRO
	/// </summary>
	public ref class REGISTRO : public System::Windows::Forms::Form
	{
	public:
		REGISTRO(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~REGISTRO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  boton_guardar;
	protected:

	private: System::Windows::Forms::TextBox^  tex_nombre;
	protected:

	private: System::Windows::Forms::Label^  nombre;
	private: System::Windows::Forms::Label^  p_apellido;
	private: System::Windows::Forms::TextBox^  tex_a_paterno;
	private: System::Windows::Forms::Label^  s_apellido;
	private: System::Windows::Forms::TextBox^  text_a_materno;
	private: System::Windows::Forms::Label^  dni;
	private: System::Windows::Forms::TextBox^  text_dni;
	private: System::Windows::Forms::Label^  t_sexo;

	private: System::Windows::Forms::Label^  t_edad;
	private: System::Windows::Forms::TextBox^  text_edad;
	private: System::Windows::Forms::Label^  t_estado_civil;

	private: System::Windows::Forms::Label^  t_fecha_nacimiento;
	private: System::Windows::Forms::ComboBox^  text_sexo;
	private: System::Windows::Forms::ComboBox^  text_estado_civil;
	private: System::Windows::Forms::DateTimePicker^  tex_fecha_de_nacimiento;




	private:
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
			System::Windows::Forms::Label^  label1;
			this->boton_guardar = (gcnew System::Windows::Forms::Button());
			this->tex_nombre = (gcnew System::Windows::Forms::TextBox());
			this->nombre = (gcnew System::Windows::Forms::Label());
			this->p_apellido = (gcnew System::Windows::Forms::Label());
			this->tex_a_paterno = (gcnew System::Windows::Forms::TextBox());
			this->s_apellido = (gcnew System::Windows::Forms::Label());
			this->text_a_materno = (gcnew System::Windows::Forms::TextBox());
			this->dni = (gcnew System::Windows::Forms::Label());
			this->text_dni = (gcnew System::Windows::Forms::TextBox());
			this->t_sexo = (gcnew System::Windows::Forms::Label());
			this->t_edad = (gcnew System::Windows::Forms::Label());
			this->text_edad = (gcnew System::Windows::Forms::TextBox());
			this->t_estado_civil = (gcnew System::Windows::Forms::Label());
			this->t_fecha_nacimiento = (gcnew System::Windows::Forms::Label());
			this->text_sexo = (gcnew System::Windows::Forms::ComboBox());
			this->text_estado_civil = (gcnew System::Windows::Forms::ComboBox());
			this->tex_fecha_de_nacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->BackColor = System::Drawing::Color::DeepSkyBlue;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::SystemColors::Window;
			label1->Location = System::Drawing::Point(0, 0);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(374, 58);
			label1->TabIndex = 17;
			label1->Text = L"Registrar persona";
			label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// boton_guardar
			// 
			this->boton_guardar->BackColor = System::Drawing::Color::CadetBlue;
			this->boton_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_guardar->ForeColor = System::Drawing::Color::White;
			this->boton_guardar->Location = System::Drawing::Point(108, 409);
			this->boton_guardar->Name = L"boton_guardar";
			this->boton_guardar->Size = System::Drawing::Size(130, 47);
			this->boton_guardar->TabIndex = 0;
			this->boton_guardar->Text = L"GUARDAR";
			this->boton_guardar->UseVisualStyleBackColor = false;
			this->boton_guardar->Click += gcnew System::EventHandler(this, &REGISTRO::boton_guardar_Click);
			// 
			// tex_nombre
			// 
			this->tex_nombre->Location = System::Drawing::Point(16, 109);
			this->tex_nombre->Name = L"tex_nombre";
			this->tex_nombre->Size = System::Drawing::Size(333, 20);
			this->tex_nombre->TabIndex = 1;
			// 
			// nombre
			// 
			this->nombre->AutoSize = true;
			this->nombre->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->nombre->Location = System::Drawing::Point(12, 81);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(79, 19);
			this->nombre->TabIndex = 2;
			this->nombre->Text = L"NOMBRES";
			// 
			// p_apellido
			// 
			this->p_apellido->AutoSize = true;
			this->p_apellido->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_apellido->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->p_apellido->Location = System::Drawing::Point(12, 153);
			this->p_apellido->Name = L"p_apellido";
			this->p_apellido->Size = System::Drawing::Size(143, 19);
			this->p_apellido->TabIndex = 3;
			this->p_apellido->Text = L"APELLIDO PATERNO";
			// 
			// tex_a_paterno
			// 
			this->tex_a_paterno->Location = System::Drawing::Point(16, 189);
			this->tex_a_paterno->Name = L"tex_a_paterno";
			this->tex_a_paterno->Size = System::Drawing::Size(153, 20);
			this->tex_a_paterno->TabIndex = 4;
			// 
			// s_apellido
			// 
			this->s_apellido->AutoSize = true;
			this->s_apellido->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s_apellido->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->s_apellido->Location = System::Drawing::Point(183, 153);
			this->s_apellido->Name = L"s_apellido";
			this->s_apellido->Size = System::Drawing::Size(149, 19);
			this->s_apellido->TabIndex = 5;
			this->s_apellido->Text = L"APELLIDO MATERNO";
			// 
			// text_a_materno
			// 
			this->text_a_materno->Location = System::Drawing::Point(185, 189);
			this->text_a_materno->Name = L"text_a_materno";
			this->text_a_materno->Size = System::Drawing::Size(164, 20);
			this->text_a_materno->TabIndex = 6;
			// 
			// dni
			// 
			this->dni->AutoSize = true;
			this->dni->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dni->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->dni->Location = System::Drawing::Point(13, 222);
			this->dni->Name = L"dni";
			this->dni->Size = System::Drawing::Size(34, 19);
			this->dni->TabIndex = 7;
			this->dni->Text = L"DNI";
			// 
			// text_dni
			// 
			this->text_dni->Location = System::Drawing::Point(15, 252);
			this->text_dni->Name = L"text_dni";
			this->text_dni->Size = System::Drawing::Size(153, 20);
			this->text_dni->TabIndex = 8;
			// 
			// t_sexo
			// 
			this->t_sexo->AutoSize = true;
			this->t_sexo->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_sexo->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->t_sexo->Location = System::Drawing::Point(184, 221);
			this->t_sexo->Name = L"t_sexo";
			this->t_sexo->Size = System::Drawing::Size(44, 19);
			this->t_sexo->TabIndex = 9;
			this->t_sexo->Text = L"SEXO";
			// 
			// t_edad
			// 
			this->t_edad->AutoSize = true;
			this->t_edad->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_edad->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->t_edad->Location = System::Drawing::Point(12, 287);
			this->t_edad->Name = L"t_edad";
			this->t_edad->Size = System::Drawing::Size(47, 19);
			this->t_edad->TabIndex = 11;
			this->t_edad->Text = L"EDAD";
			// 
			// text_edad
			// 
			this->text_edad->Location = System::Drawing::Point(15, 319);
			this->text_edad->Name = L"text_edad";
			this->text_edad->Size = System::Drawing::Size(153, 20);
			this->text_edad->TabIndex = 12;
			// 
			// t_estado_civil
			// 
			this->t_estado_civil->AutoSize = true;
			this->t_estado_civil->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_estado_civil->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->t_estado_civil->Location = System::Drawing::Point(185, 286);
			this->t_estado_civil->Name = L"t_estado_civil";
			this->t_estado_civil->Size = System::Drawing::Size(99, 19);
			this->t_estado_civil->TabIndex = 13;
			this->t_estado_civil->Text = L"ESTADO CIVIL";
			// 
			// t_fecha_nacimiento
			// 
			this->t_fecha_nacimiento->AutoSize = true;
			this->t_fecha_nacimiento->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_fecha_nacimiento->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->t_fecha_nacimiento->Location = System::Drawing::Point(88, 353);
			this->t_fecha_nacimiento->Name = L"t_fecha_nacimiento";
			this->t_fecha_nacimiento->Size = System::Drawing::Size(167, 19);
			this->t_fecha_nacimiento->TabIndex = 15;
			this->t_fecha_nacimiento->Text = L"FECHA DE NACIMIENTO";
			// 
			// text_sexo
			// 
			this->text_sexo->FormattingEnabled = true;
			this->text_sexo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"MASCULINO", L"FEMENINO" });
			this->text_sexo->Location = System::Drawing::Point(185, 251);
			this->text_sexo->Name = L"text_sexo";
			this->text_sexo->Size = System::Drawing::Size(164, 21);
			this->text_sexo->TabIndex = 18;
			// 
			// text_estado_civil
			// 
			this->text_estado_civil->FormattingEnabled = true;
			this->text_estado_civil->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"SOLTERO", L"CASADO" });
			this->text_estado_civil->Location = System::Drawing::Point(185, 319);
			this->text_estado_civil->Name = L"text_estado_civil";
			this->text_estado_civil->Size = System::Drawing::Size(164, 21);
			this->text_estado_civil->TabIndex = 19;
			// 
			// tex_fecha_de_nacimiento
			// 
			this->tex_fecha_de_nacimiento->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->tex_fecha_de_nacimiento->Location = System::Drawing::Point(77, 380);
			this->tex_fecha_de_nacimiento->Name = L"tex_fecha_de_nacimiento";
			this->tex_fecha_de_nacimiento->Size = System::Drawing::Size(200, 20);
			this->tex_fecha_de_nacimiento->TabIndex = 20;
			// 
			// REGISTRO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(373, 472);
			this->Controls->Add(this->tex_fecha_de_nacimiento);
			this->Controls->Add(this->text_estado_civil);
			this->Controls->Add(this->text_sexo);
			this->Controls->Add(label1);
			this->Controls->Add(this->t_fecha_nacimiento);
			this->Controls->Add(this->t_estado_civil);
			this->Controls->Add(this->text_edad);
			this->Controls->Add(this->t_edad);
			this->Controls->Add(this->t_sexo);
			this->Controls->Add(this->text_dni);
			this->Controls->Add(this->dni);
			this->Controls->Add(this->text_a_materno);
			this->Controls->Add(this->s_apellido);
			this->Controls->Add(this->tex_a_paterno);
			this->Controls->Add(this->p_apellido);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->tex_nombre);
			this->Controls->Add(this->boton_guardar);
			this->Name = L"REGISTRO";
			this->Text = L"REGISTRO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
	
	private: System::Void boton_guardar_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Nombre = tex_nombre->Text->ToUpper();
		String^ P_apellido = tex_a_paterno->Text->ToUpper();
		String^ S_apellido = text_a_materno->Text->ToUpper();
		String^ DNI = text_dni->Text->ToUpper();
		String^ Sexo = text_sexo->Text->ToUpper();
		String^ Edad = text_edad->Text->ToUpper();
		String^ Estado_civil = text_estado_civil->Text->ToUpper();
		String^ Fecha_nacimiento = tex_fecha_de_nacimiento->Text->ToUpper();
		int edad;
		std::string nombre;
		std::string p_apellido;
		std::string s_apellido;
		std::string dni;
		std::string sexo;
		std::string estado_civil;
		std::string fecha_nacimiento;
		edad=Convert::ToInt32(Edad);
		std::ofstream guardar;
		MarshalString(Nombre, nombre);
		MarshalString(P_apellido, p_apellido);
		MarshalString(S_apellido, s_apellido);
		MarshalString(DNI, dni);
		MarshalString(Sexo, sexo);
		MarshalString(Estado_civil, estado_civil);
		MarshalString(Fecha_nacimiento, fecha_nacimiento);
		agregar(guardar, edad, nombre, p_apellido, s_apellido, sexo, estado_civil, fecha_nacimiento, dni);
		Close();
	}
};
}
