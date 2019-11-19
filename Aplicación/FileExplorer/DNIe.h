#pragma once

namespace FileExplorer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DNIe
	/// </summary>
	public ref class DNIe : public System::Windows::Forms::Form
	{
	public:
		DNIe(void)
		{
			InitializeComponent();
			
			Cargar();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		void setCUI(String^nuevo) {txt_DNI->Text =objCUI=nuevo;}
		void setPrimerApellido(String^ nuevo) { txt_PrimerApellido->Text = objPrimerApellido = nuevo; }
		void setSegundoApellido(String^ nuevo) { txt_SegundoApellido->Text = objSegundoApellido = nuevo; }
		void setNombres(String^ nuevo) { txt_Prenombres->Text = objNombres = nuevo; }
		void setSexo(String^ nuevo) { txt_Sexo->Text = objSexo = nuevo; }
		void setEstadoCivil(String^ nuevo) { txt_EstadoCivil->Text = objEstadoCivil = nuevo; }
		void setFechaNacimiento(String^ nuevo) { txt_Fecha->Text = objFechaDeNacimiento = nuevo; }
		String^ getCUI() { return objCUI; }
		String^ getPrimerApellido() { return objPrimerApellido; }
		String^ getSegundoApellido() { return objSegundoApellido; }
		String^ getNombres() { return objNombres; }
		String^ getSexo() { return objSexo; }
		String^ getEstadoCivil() { return objEstadoCivil; }
		String^ getFechaNacimiento() { return objFechaDeNacimiento; }
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DNIe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label_SegundoApellido;

	private: System::Windows::Forms::Label^ label_FechaNaci;
	private: System::Windows::Forms::Label^ label_Nombre;
	private: System::Windows::Forms::Label^ label_CUI;
	private: System::Windows::Forms::Label^ label_PrimerApellido;

	private: System::Windows::Forms::Label^ Title;

	private: System::Windows::Forms::Label^ txt_PrimerApellido;
	private: System::Windows::Forms::Label^ txt_SegundoApellido;
	private: System::Windows::Forms::Label^ txt_Prenombres;
	private: System::Windows::Forms::Label^ txt_Fecha;
	private: System::Windows::Forms::Label^ txt_DNI;

	private: System::Windows::Forms::Button^ button1;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		String^ objCUI;
		String^ objPrimerApellido;
		String^ objSegundoApellido;
		String^ objNombres;
		String^ objSexo;
		String^ objEstadoCivil;
		String^ objFechaDeNacimiento;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ txt_Sexo;

	private: System::Windows::Forms::Label^ txt_EstadoCivil;

		   //
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label_SegundoApellido = (gcnew System::Windows::Forms::Label());
			this->label_FechaNaci = (gcnew System::Windows::Forms::Label());
			this->label_Nombre = (gcnew System::Windows::Forms::Label());
			this->label_CUI = (gcnew System::Windows::Forms::Label());
			this->label_PrimerApellido = (gcnew System::Windows::Forms::Label());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->txt_PrimerApellido = (gcnew System::Windows::Forms::Label());
			this->txt_SegundoApellido = (gcnew System::Windows::Forms::Label());
			this->txt_Prenombres = (gcnew System::Windows::Forms::Label());
			this->txt_Fecha = (gcnew System::Windows::Forms::Label());
			this->txt_DNI = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_Sexo = (gcnew System::Windows::Forms::Label());
			this->txt_EstadoCivil = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->flowLayoutPanel1->Location = System::Drawing::Point(21, 68);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(115, 163);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// label_SegundoApellido
			// 
			this->label_SegundoApellido->AutoSize = true;
			this->label_SegundoApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_SegundoApellido->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_SegundoApellido->Location = System::Drawing::Point(153, 127);
			this->label_SegundoApellido->Name = L"label_SegundoApellido";
			this->label_SegundoApellido->Size = System::Drawing::Size(116, 16);
			this->label_SegundoApellido->TabIndex = 54;
			this->label_SegundoApellido->Text = L"Segundo Apellido";
			// 
			// label_FechaNaci
			// 
			this->label_FechaNaci->AutoSize = true;
			this->label_FechaNaci->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_FechaNaci->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_FechaNaci->Location = System::Drawing::Point(158, 303);
			this->label_FechaNaci->Name = L"label_FechaNaci";
			this->label_FechaNaci->Size = System::Drawing::Size(136, 16);
			this->label_FechaNaci->TabIndex = 50;
			this->label_FechaNaci->Text = L"Fecha de Nacimiento";
			// 
			// label_Nombre
			// 
			this->label_Nombre->AutoSize = true;
			this->label_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Nombre->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_Nombre->Location = System::Drawing::Point(154, 180);
			this->label_Nombre->Name = L"label_Nombre";
			this->label_Nombre->Size = System::Drawing::Size(88, 16);
			this->label_Nombre->TabIndex = 48;
			this->label_Nombre->Text = L"Pre Nombres";
			// 
			// label_CUI
			// 
			this->label_CUI->AutoSize = true;
			this->label_CUI->BackColor = System::Drawing::SystemColors::Window;
			this->label_CUI->Cursor = System::Windows::Forms::Cursors::Default;
			this->label_CUI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_CUI->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_CUI->Location = System::Drawing::Point(388, 303);
			this->label_CUI->Name = L"label_CUI";
			this->label_CUI->Size = System::Drawing::Size(31, 16);
			this->label_CUI->TabIndex = 44;
			this->label_CUI->Text = L"DNI";
			// 
			// label_PrimerApellido
			// 
			this->label_PrimerApellido->AutoSize = true;
			this->label_PrimerApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_PrimerApellido->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label_PrimerApellido->Location = System::Drawing::Point(153, 68);
			this->label_PrimerApellido->Name = L"label_PrimerApellido";
			this->label_PrimerApellido->Size = System::Drawing::Size(100, 16);
			this->label_PrimerApellido->TabIndex = 43;
			this->label_PrimerApellido->Text = L"Primer Apellido";
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
			this->Title->TabIndex = 56;
			this->Title->Text = L"Documento Nacional de Identidad Electrónico";
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_PrimerApellido
			// 
			this->txt_PrimerApellido->AutoSize = true;
			this->txt_PrimerApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_PrimerApellido->Location = System::Drawing::Point(155, 100);
			this->txt_PrimerApellido->Name = L"txt_PrimerApellido";
			this->txt_PrimerApellido->Size = System::Drawing::Size(13, 20);
			this->txt_PrimerApellido->TabIndex = 58;
			this->txt_PrimerApellido->Text = L".";
			// 
			// txt_SegundoApellido
			// 
			this->txt_SegundoApellido->AutoSize = true;
			this->txt_SegundoApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_SegundoApellido->Location = System::Drawing::Point(157, 158);
			this->txt_SegundoApellido->Name = L"txt_SegundoApellido";
			this->txt_SegundoApellido->Size = System::Drawing::Size(13, 20);
			this->txt_SegundoApellido->TabIndex = 59;
			this->txt_SegundoApellido->Text = L".";
			// 
			// txt_Prenombres
			// 
			this->txt_Prenombres->AutoSize = true;
			this->txt_Prenombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Prenombres->Location = System::Drawing::Point(157, 215);
			this->txt_Prenombres->Name = L"txt_Prenombres";
			this->txt_Prenombres->Size = System::Drawing::Size(13, 20);
			this->txt_Prenombres->TabIndex = 60;
			this->txt_Prenombres->Text = L".";
			// 
			// txt_Fecha
			// 
			this->txt_Fecha->AutoSize = true;
			this->txt_Fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Fecha->Location = System::Drawing::Point(158, 335);
			this->txt_Fecha->Name = L"txt_Fecha";
			this->txt_Fecha->Size = System::Drawing::Size(13, 20);
			this->txt_Fecha->TabIndex = 61;
			this->txt_Fecha->Text = L".";
			// 
			// txt_DNI
			// 
			this->txt_DNI->AutoSize = true;
			this->txt_DNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_DNI->Location = System::Drawing::Point(383, 335);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(13, 20);
			this->txt_DNI->TabIndex = 62;
			this->txt_DNI->Text = L".";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(40, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 63;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DNIe::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(157, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 64;
			this->label1->Text = L"Sexo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(383, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 65;
			this->label2->Text = L"Estado Civil";
			// 
			// txt_Sexo
			// 
			this->txt_Sexo->AutoSize = true;
			this->txt_Sexo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Sexo->Location = System::Drawing::Point(158, 272);
			this->txt_Sexo->Name = L"txt_Sexo";
			this->txt_Sexo->Size = System::Drawing::Size(13, 20);
			this->txt_Sexo->TabIndex = 66;
			this->txt_Sexo->Text = L".";
			// 
			// txt_EstadoCivil
			// 
			this->txt_EstadoCivil->AutoSize = true;
			this->txt_EstadoCivil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_EstadoCivil->Location = System::Drawing::Point(383, 269);
			this->txt_EstadoCivil->Name = L"txt_EstadoCivil";
			this->txt_EstadoCivil->Size = System::Drawing::Size(13, 20);
			this->txt_EstadoCivil->TabIndex = 67;
			this->txt_EstadoCivil->Text = L".";
			// 
			// DNIe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(524, 377);
			this->Controls->Add(this->txt_EstadoCivil);
			this->Controls->Add(this->txt_Sexo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->txt_Fecha);
			this->Controls->Add(this->txt_Prenombres);
			this->Controls->Add(this->txt_SegundoApellido);
			this->Controls->Add(this->txt_PrimerApellido);
			this->Controls->Add(this->label_SegundoApellido);
			this->Controls->Add(this->label_FechaNaci);
			this->Controls->Add(this->label_Nombre);
			this->Controls->Add(this->label_CUI);
			this->Controls->Add(this->label_PrimerApellido);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->Title);
			this->Name = L"DNIe";
			this->Text = L"DNIe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void Cargar() {
			txt_DNI->Text=objCUI;
			
	    }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	DNIe::Hide();
}
};
}
