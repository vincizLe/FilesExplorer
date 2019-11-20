#pragma once
#include"REGISTRO.h"
#include"BUSQUEDA.h"
#include"ADMINISTRADOR.h"

namespace TRABAJO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PRINCIPAL
	/// </summary>
	public ref class PRINCIPAL : public System::Windows::Forms::Form
	{
	public:
		PRINCIPAL(void)
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
		~PRINCIPAL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  boton_registrar;
	protected:

	private: System::Windows::Forms::Button^  boton_buscar;
	private: System::Windows::Forms::Button^  boton_administrador;
	private: System::Windows::Forms::Label^  label2;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PRINCIPAL::typeid));
			this->boton_registrar = (gcnew System::Windows::Forms::Button());
			this->boton_buscar = (gcnew System::Windows::Forms::Button());
			this->boton_administrador = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// boton_registrar
			// 
			this->boton_registrar->BackColor = System::Drawing::Color::CadetBlue;
			this->boton_registrar->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->boton_registrar->Location = System::Drawing::Point(99, 432);
			this->boton_registrar->Name = L"boton_registrar";
			this->boton_registrar->Size = System::Drawing::Size(167, 58);
			this->boton_registrar->TabIndex = 0;
			this->boton_registrar->Text = L"REGISTRAR";
			this->boton_registrar->UseVisualStyleBackColor = false;
			this->boton_registrar->Click += gcnew System::EventHandler(this, &PRINCIPAL::button1_Click);
			// 
			// boton_buscar
			// 
			this->boton_buscar->BackColor = System::Drawing::Color::CadetBlue;
			this->boton_buscar->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->boton_buscar->Location = System::Drawing::Point(99, 342);
			this->boton_buscar->Name = L"boton_buscar";
			this->boton_buscar->Size = System::Drawing::Size(167, 64);
			this->boton_buscar->TabIndex = 1;
			this->boton_buscar->Text = L"BUSCAR";
			this->boton_buscar->UseVisualStyleBackColor = false;
			this->boton_buscar->Click += gcnew System::EventHandler(this, &PRINCIPAL::boton_buscar_Click);
			// 
			// boton_administrador
			// 
			this->boton_administrador->BackColor = System::Drawing::Color::CadetBlue;
			this->boton_administrador->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->boton_administrador->Location = System::Drawing::Point(99, 254);
			this->boton_administrador->Name = L"boton_administrador";
			this->boton_administrador->Size = System::Drawing::Size(167, 63);
			this->boton_administrador->TabIndex = 2;
			this->boton_administrador->Text = L"ADMINISTRADOR";
			this->boton_administrador->UseVisualStyleBackColor = false;
			this->boton_administrador->Click += gcnew System::EventHandler(this, &PRINCIPAL::boton_administrador_Click);
			// 
			// label1
			// 
			label1->BackColor = System::Drawing::Color::DeepSkyBlue;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::SystemColors::Window;
			label1->Location = System::Drawing::Point(-1, 0);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(374, 58);
			label1->TabIndex = 4;
			label1->Text = L"Documento Nacional de Identidad Electrónico";
			label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(77, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 161);
			this->label2->TabIndex = 5;
			// 
			// PRINCIPAL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(370, 502);
			this->Controls->Add(this->label2);
			this->Controls->Add(label1);
			this->Controls->Add(this->boton_administrador);
			this->Controls->Add(this->boton_buscar);
			this->Controls->Add(this->boton_registrar);
			this->Name = L"PRINCIPAL";
			this->Text = L"PRINCIPAL";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ Formulario_registro = gcnew REGISTRO();
		Formulario_registro->Show();
	}
	private: System::Void boton_buscar_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ Formulario_busqueda = gcnew BUSQUEDA();
		Formulario_busqueda->Show();
	}
	private: System::Void boton_administrador_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ administrador = gcnew ADMINISTRADOR();
		administrador->Show();
	}
	};
}
