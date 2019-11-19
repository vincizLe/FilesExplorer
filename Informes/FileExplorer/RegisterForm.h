#pragma once

namespace FileExplorer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		String^ getCUI() { return objCUI; }
		String^ getPrimerApellido() { return objPrimerApellido; }
		String^ getSegundoApellido() { return objSegundoApellido; }
		String^ getNombres() { return objNombres; }
		String^ getSexo() { return objSexo; }
		String^ getEstadoCivil() { return objEstadoCivil; }
		String^ getFechaNacimiento() { return objFechaDeNacimiento; }
		bool getCompuertaAgregar() { return compuertaAgregar; }
		void setCompuertaAgregar(bool nuevo) { compuertaAgregar = nuevo; }
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_Agregar;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox_EstadoCivil;
	private: System::Windows::Forms::DateTimePicker^ date_FechaNacimiento;
	private: System::Windows::Forms::ComboBox^ comboBox_Sexo;
	private: System::Windows::Forms::Label^ label_FechaNaci;
	private: System::Windows::Forms::Label^ label_Estado;
	private: System::Windows::Forms::Label^ label_Sexo;
	private: System::Windows::Forms::TextBox^ textBox_Nombres;
	private: System::Windows::Forms::Label^ label_Nombre;
	private: System::Windows::Forms::TextBox^ textBox_SegundoApellido;
	private: System::Windows::Forms::TextBox^ textBox_PrimerApellido;
	private: System::Windows::Forms::TextBox^ textBox_CUI;
	private: System::Windows::Forms::Label^ label_CUI;
	private: System::Windows::Forms::Label^ label_PrimerApellido;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ label_SegundoApellido;

	private:
		/// <summary>
		String^ objCUI;
		String^ objPrimerApellido;
		String^ objSegundoApellido;
		String^ objNombres;
		String^ objSexo;
		String^ objEstadoCivil;
		String^ objFechaDeNacimiento;
		bool compuertaAgregar;
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
			this->button_Agregar = (gcnew System::Windows::Forms::Button());
			this->comboBox_EstadoCivil = (gcnew System::Windows::Forms::ComboBox());
			this->date_FechaNacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox_Sexo = (gcnew System::Windows::Forms::ComboBox());
			this->label_FechaNaci = (gcnew System::Windows::Forms::Label());
			this->label_Estado = (gcnew System::Windows::Forms::Label());
			this->label_Sexo = (gcnew System::Windows::Forms::Label());
			this->textBox_Nombres = (gcnew System::Windows::Forms::TextBox());
			this->label_Nombre = (gcnew System::Windows::Forms::Label());
			this->textBox_SegundoApellido = (gcnew System::Windows::Forms::TextBox());
			this->textBox_PrimerApellido = (gcnew System::Windows::Forms::TextBox());
			this->textBox_CUI = (gcnew System::Windows::Forms::TextBox());
			this->label_CUI = (gcnew System::Windows::Forms::Label());
			this->label_PrimerApellido = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->label_SegundoApellido = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_Agregar
			// 
			this->button_Agregar->BackColor = System::Drawing::Color::LightGray;
			this->button_Agregar->Location = System::Drawing::Point(288, 491);
			this->button_Agregar->Name = L"button_Agregar";
			this->button_Agregar->Size = System::Drawing::Size(98, 34);
			this->button_Agregar->TabIndex = 41;
			this->button_Agregar->Text = L"Agregar";
			this->button_Agregar->UseVisualStyleBackColor = false;
			this->button_Agregar->Click += gcnew System::EventHandler(this, &RegisterForm::button_Agregar_Click_1);
			// 
			// comboBox_EstadoCivil
			// 
			this->comboBox_EstadoCivil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox_EstadoCivil->FormattingEnabled = true;
			this->comboBox_EstadoCivil->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Soltero", L"Casado" });
			this->comboBox_EstadoCivil->Location = System::Drawing::Point(222, 350);
			this->comboBox_EstadoCivil->Name = L"comboBox_EstadoCivil";
			this->comboBox_EstadoCivil->Size = System::Drawing::Size(164, 28);
			this->comboBox_EstadoCivil->TabIndex = 40;
			// 
			// date_FechaNacimiento
			// 
			this->date_FechaNacimiento->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->date_FechaNacimiento->CalendarForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->date_FechaNacimiento->CalendarTitleForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->date_FechaNacimiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->date_FechaNacimiento->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date_FechaNacimiento->Location = System::Drawing::Point(31, 432);
			this->date_FechaNacimiento->Name = L"date_FechaNacimiento";
			this->date_FechaNacimiento->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->date_FechaNacimiento->Size = System::Drawing::Size(354, 29);
			this->date_FechaNacimiento->TabIndex = 39;
			this->date_FechaNacimiento->Value = System::DateTime(2019, 11, 13, 0, 0, 0, 0);
			// 
			// comboBox_Sexo
			// 
			this->comboBox_Sexo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_Sexo->FormattingEnabled = true;
			this->comboBox_Sexo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->comboBox_Sexo->Location = System::Drawing::Point(31, 350);
			this->comboBox_Sexo->Name = L"comboBox_Sexo";
			this->comboBox_Sexo->Size = System::Drawing::Size(164, 28);
			this->comboBox_Sexo->TabIndex = 38;
			// 
			// label_FechaNaci
			// 
			this->label_FechaNaci->AutoSize = true;
			this->label_FechaNaci->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_FechaNaci->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label_FechaNaci->Location = System::Drawing::Point(28, 398);
			this->label_FechaNaci->Name = L"label_FechaNaci";
			this->label_FechaNaci->Size = System::Drawing::Size(159, 20);
			this->label_FechaNaci->TabIndex = 37;
			this->label_FechaNaci->Text = L"Fecha de Nacimiento";
			// 
			// label_Estado
			// 
			this->label_Estado->AutoSize = true;
			this->label_Estado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Estado->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label_Estado->Location = System::Drawing::Point(218, 321);
			this->label_Estado->Name = L"label_Estado";
			this->label_Estado->Size = System::Drawing::Size(91, 20);
			this->label_Estado->TabIndex = 36;
			this->label_Estado->Text = L"Estado Civil";
			// 
			// label_Sexo
			// 
			this->label_Sexo->AutoSize = true;
			this->label_Sexo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Sexo->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label_Sexo->Location = System::Drawing::Point(28, 319);
			this->label_Sexo->Name = L"label_Sexo";
			this->label_Sexo->Size = System::Drawing::Size(45, 20);
			this->label_Sexo->TabIndex = 35;
			this->label_Sexo->Text = L"Sexo";
			// 
			// textBox_Nombres
			// 
			this->textBox_Nombres->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_Nombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Nombres->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_Nombres->Location = System::Drawing::Point(29, 279);
			this->textBox_Nombres->Name = L"textBox_Nombres";
			this->textBox_Nombres->Size = System::Drawing::Size(353, 26);
			this->textBox_Nombres->TabIndex = 34;
			// 
			// label_Nombre
			// 
			this->label_Nombre->AutoSize = true;
			this->label_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Nombre->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label_Nombre->Location = System::Drawing::Point(27, 241);
			this->label_Nombre->Name = L"label_Nombre";
			this->label_Nombre->Size = System::Drawing::Size(73, 20);
			this->label_Nombre->TabIndex = 33;
			this->label_Nombre->Text = L"Nombres";
			// 
			// textBox_SegundoApellido
			// 
			this->textBox_SegundoApellido->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_SegundoApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_SegundoApellido->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_SegundoApellido->Location = System::Drawing::Point(221, 196);
			this->textBox_SegundoApellido->Name = L"textBox_SegundoApellido";
			this->textBox_SegundoApellido->Size = System::Drawing::Size(164, 26);
			this->textBox_SegundoApellido->TabIndex = 32;
			// 
			// textBox_PrimerApellido
			// 
			this->textBox_PrimerApellido->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_PrimerApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_PrimerApellido->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_PrimerApellido->Location = System::Drawing::Point(29, 196);
			this->textBox_PrimerApellido->Name = L"textBox_PrimerApellido";
			this->textBox_PrimerApellido->Size = System::Drawing::Size(164, 26);
			this->textBox_PrimerApellido->TabIndex = 31;
			// 
			// textBox_CUI
			// 
			this->textBox_CUI->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_CUI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_CUI->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox_CUI->Location = System::Drawing::Point(29, 108);
			this->textBox_CUI->Name = L"textBox_CUI";
			this->textBox_CUI->Size = System::Drawing::Size(164, 26);
			this->textBox_CUI->TabIndex = 30;
			// 
			// label_CUI
			// 
			this->label_CUI->AutoSize = true;
			this->label_CUI->BackColor = System::Drawing::SystemColors::Window;
			this->label_CUI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_CUI->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label_CUI->Location = System::Drawing::Point(26, 69);
			this->label_CUI->Name = L"label_CUI";
			this->label_CUI->Size = System::Drawing::Size(224, 20);
			this->label_CUI->TabIndex = 29;
			this->label_CUI->Text = L"Código Unico de Identificación";
			// 
			// label_PrimerApellido
			// 
			this->label_PrimerApellido->AutoSize = true;
			this->label_PrimerApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PrimerApellido->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label_PrimerApellido->Location = System::Drawing::Point(27, 155);
			this->label_PrimerApellido->Name = L"label_PrimerApellido";
			this->label_PrimerApellido->Size = System::Drawing::Size(114, 20);
			this->label_PrimerApellido->TabIndex = 28;
			this->label_PrimerApellido->Text = L"Primer Apellido";
			// 
			// title
			// 
			this->title->BackColor = System::Drawing::Color::Cyan;
			this->title->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->title->Location = System::Drawing::Point(0, -2);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(414, 56);
			this->title->TabIndex = 27;
			this->title->Text = L"AGREGAR PERSONA";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_SegundoApellido
			// 
			this->label_SegundoApellido->AutoSize = true;
			this->label_SegundoApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_SegundoApellido->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label_SegundoApellido->Location = System::Drawing::Point(218, 155);
			this->label_SegundoApellido->Name = L"label_SegundoApellido";
			this->label_SegundoApellido->Size = System::Drawing::Size(134, 20);
			this->label_SegundoApellido->TabIndex = 42;
			this->label_SegundoApellido->Text = L"Segundo Apellido";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(411, 555);
			this->Controls->Add(this->label_SegundoApellido);
			this->Controls->Add(this->button_Agregar);
			this->Controls->Add(this->comboBox_EstadoCivil);
			this->Controls->Add(this->date_FechaNacimiento);
			this->Controls->Add(this->comboBox_Sexo);
			this->Controls->Add(this->label_FechaNaci);
			this->Controls->Add(this->label_Estado);
			this->Controls->Add(this->label_Sexo);
			this->Controls->Add(this->textBox_Nombres);
			this->Controls->Add(this->label_Nombre);
			this->Controls->Add(this->textBox_SegundoApellido);
			this->Controls->Add(this->textBox_PrimerApellido);
			this->Controls->Add(this->textBox_CUI);
			this->Controls->Add(this->label_CUI);
			this->Controls->Add(this->label_PrimerApellido);
			this->Controls->Add(this->title);
			this->Name = L"RegisterForm";
			this->Text = L"Formulario de Registro";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Agregar_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//Actualizamos los valores de cada variable
		objCUI = textBox_CUI->Text;
		objPrimerApellido = textBox_PrimerApellido->Text;
		objSegundoApellido = textBox_SegundoApellido->Text;
		objNombres = textBox_Nombres->Text;
		objSexo = comboBox_Sexo->Text;
		objEstadoCivil = comboBox_EstadoCivil->Text;
		objFechaDeNacimiento = (Convert::ToString(date_FechaNacimiento->Value))->Remove(10);
		compuertaAgregar = true;
		//Escondemos el formulario actual
		RegisterForm::Hide();
	}
};
}
