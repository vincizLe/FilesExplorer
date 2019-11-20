#pragma once
#include"RESULTADO.h"

namespace TRABAJO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BUSQUEDA
	/// </summary>
	public ref class BUSQUEDA : public System::Windows::Forms::Form
	{
	public:
		BUSQUEDA(void)
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
		~BUSQUEDA()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  t_ingrese_dni;
	protected:
	private: System::Windows::Forms::TextBox^  text_dni_busqueda;
	private: System::Windows::Forms::Button^  boton_buscar_dni;


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
			this->t_ingrese_dni = (gcnew System::Windows::Forms::Label());
			this->text_dni_busqueda = (gcnew System::Windows::Forms::TextBox());
			this->boton_buscar_dni = (gcnew System::Windows::Forms::Button());
			label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// t_ingrese_dni
			// 
			this->t_ingrese_dni->AutoSize = true;
			this->t_ingrese_dni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_ingrese_dni->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->t_ingrese_dni->Location = System::Drawing::Point(12, 75);
			this->t_ingrese_dni->Name = L"t_ingrese_dni";
			this->t_ingrese_dni->Size = System::Drawing::Size(92, 13);
			this->t_ingrese_dni->TabIndex = 0;
			this->t_ingrese_dni->Text = L"INGRESE DNI:";
			// 
			// text_dni_busqueda
			// 
			this->text_dni_busqueda->Location = System::Drawing::Point(39, 122);
			this->text_dni_busqueda->Name = L"text_dni_busqueda";
			this->text_dni_busqueda->Size = System::Drawing::Size(139, 20);
			this->text_dni_busqueda->TabIndex = 1;
			// 
			// boton_buscar_dni
			// 
			this->boton_buscar_dni->BackColor = System::Drawing::Color::CadetBlue;
			this->boton_buscar_dni->Location = System::Drawing::Point(59, 169);
			this->boton_buscar_dni->Name = L"boton_buscar_dni";
			this->boton_buscar_dni->Size = System::Drawing::Size(102, 34);
			this->boton_buscar_dni->TabIndex = 2;
			this->boton_buscar_dni->Text = L"BUSCAR";
			this->boton_buscar_dni->UseVisualStyleBackColor = false;
			this->boton_buscar_dni->Click += gcnew System::EventHandler(this, &BUSQUEDA::boton_buscar_dni_Click);
			// 
			// label1
			// 
			label1->BackColor = System::Drawing::Color::DeepSkyBlue;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::SystemColors::Window;
			label1->Location = System::Drawing::Point(0, 0);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(230, 58);
			label1->TabIndex = 5;
			label1->Text = L"Busqueda de archivos";
			label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BUSQUEDA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(230, 234);
			this->Controls->Add(label1);
			this->Controls->Add(this->boton_buscar_dni);
			this->Controls->Add(this->text_dni_busqueda);
			this->Controls->Add(this->t_ingrese_dni);
			this->Name = L"BUSQUEDA";
			this->Text = L"BUSQUEDA";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void boton_buscar_dni_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ DNI = text_dni_busqueda->Text;
		Form^ resultado = gcnew RESULTADO(DNI);

		resultado->Show();
		Close();
	}
	};
}
