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
	/// Resumen de ADMINISTRADOR
	/// </summary>
	public ref class ADMINISTRADOR : public System::Windows::Forms::Form
	{
	public:
		ADMINISTRADOR(void)
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
		~ADMINISTRADOR()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  DIRECCION_CAJA;
	protected:

	protected:
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::TextBox^  BUSCAR_CAJA;

	private: System::Windows::Forms::Button^  boton_buscar_ad;

	private: System::Windows::Forms::Button^  boton_ver;

	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  NOMBRE;
	private: System::Windows::Forms::ColumnHeader^  APELLIDO;

	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::Label^  label2;
			this->DIRECCION_CAJA = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->BUSCAR_CAJA = (gcnew System::Windows::Forms::TextBox());
			this->boton_buscar_ad = (gcnew System::Windows::Forms::Button());
			this->boton_ver = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->NOMBRE = (gcnew System::Windows::Forms::ColumnHeader());
			this->APELLIDO = (gcnew System::Windows::Forms::ColumnHeader());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			label2->BackColor = System::Drawing::Color::DeepSkyBlue;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->ForeColor = System::Drawing::SystemColors::Window;
			label2->Location = System::Drawing::Point(-2, 0);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(740, 58);
			label2->TabIndex = 7;
			label2->Text = L"Busqueda de archivos";
			label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DIRECCION_CAJA
			// 
			this->DIRECCION_CAJA->Location = System::Drawing::Point(12, 77);
			this->DIRECCION_CAJA->Name = L"DIRECCION_CAJA";
			this->DIRECCION_CAJA->Size = System::Drawing::Size(513, 20);
			this->DIRECCION_CAJA->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// BUSCAR_CAJA
			// 
			this->BUSCAR_CAJA->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->BUSCAR_CAJA->Location = System::Drawing::Point(573, 180);
			this->BUSCAR_CAJA->Name = L"BUSCAR_CAJA";
			this->BUSCAR_CAJA->Size = System::Drawing::Size(130, 20);
			this->BUSCAR_CAJA->TabIndex = 2;
			this->BUSCAR_CAJA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// boton_buscar_ad
			// 
			this->boton_buscar_ad->Location = System::Drawing::Point(573, 122);
			this->boton_buscar_ad->Name = L"boton_buscar_ad";
			this->boton_buscar_ad->Size = System::Drawing::Size(130, 40);
			this->boton_buscar_ad->TabIndex = 3;
			this->boton_buscar_ad->Text = L"BUSCAR";
			this->boton_buscar_ad->UseVisualStyleBackColor = true;
			this->boton_buscar_ad->Click += gcnew System::EventHandler(this, &ADMINISTRADOR::boton_buscar_ad_Click);
			// 
			// boton_ver
			// 
			this->boton_ver->Location = System::Drawing::Point(573, 232);
			this->boton_ver->Name = L"boton_ver";
			this->boton_ver->Size = System::Drawing::Size(130, 46);
			this->boton_ver->TabIndex = 4;
			this->boton_ver->Text = L"VER DNI";
			this->boton_ver->UseVisualStyleBackColor = true;
			this->boton_ver->Click += gcnew System::EventHandler(this, &ADMINISTRADOR::boton_ver_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->NOMBRE,
					this->APELLIDO
			});
			this->listView1->Location = System::Drawing::Point(0, 112);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(524, 418);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->DisplayIndex = 2;
			this->columnHeader1->Text = L"DNI";
			this->columnHeader1->Width = 124;
			// 
			// NOMBRE
			// 
			this->NOMBRE->DisplayIndex = 0;
			this->NOMBRE->Text = L"NOMBRE";
			this->NOMBRE->Width = 207;
			// 
			// APELLIDO
			// 
			this->APELLIDO->DisplayIndex = 1;
			this->APELLIDO->Text = L"APELLIDO";
			this->APELLIDO->Width = 235;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &ADMINISTRADOR::timer1_Tick);
			// 
			// ADMINISTRADOR
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(738, 529);
			this->Controls->Add(label2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->boton_ver);
			this->Controls->Add(this->boton_buscar_ad);
			this->Controls->Add(this->BUSCAR_CAJA);
			this->Controls->Add(this->DIRECCION_CAJA);
			this->Name = L"ADMINISTRADOR";
			this->Text = L"ADMINISTRADOR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		void busca_nombre(ARBOL*& arbol,NODO*& raiz,String^ nombre) {
			std::ifstream abrir;
			std::string Nombre;
			MarshalString(nombre, Nombre);
			std::string clave;
			std::string aux;
			std::string fin;
			std::string NOMBRE;
			String^ NOMBRE_A;
			String^ P_APELLIDO_A;
			String^ DNI_A;


			int edad;
			std::string p_apellido;
			std::string s_apellido;
			std::string dni;
			std::string sexo;
			std::string estado_civil;
			std::string fecha_nacimiento;
			std::string name;
			std::string direccion;
			std::string P_APELLIDO;
			std::string DNI;
			
			
			int tama = Nombre.size();
			if (raiz != NULL) {
				clave = raiz->obtener_clave();
				aux = clave.substr(0, tama);
				if (Nombre == aux) {
					PERSONA* persona;
					direccion = raiz->obtener_direccion();
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
						arbol->cargar_nodo(raiz, persona);
						NOMBRE = raiz->obtener_persona()->obtener_nombre();
						P_APELLIDO = raiz->obtener_persona()->obtener_p_apellido();
						DNI = raiz->obtener_persona()->obtener_dni();
						DNI_A = gcnew String(DNI.c_str());
						NOMBRE_A = gcnew String(NOMBRE.c_str());
						P_APELLIDO_A = gcnew String(P_APELLIDO.c_str());
						ListViewItem^ lw = listView1->Items->Add(DNI_A);
						//lw=listView1->Items->Add()
						lw->SubItems->Add(NOMBRE_A);
						lw->SubItems->Add(P_APELLIDO_A);
						abrir >> name;
						
					}
					abrir.close();
				}
				busca_nombre(arbol, raiz->obtener_izquierda(), nombre);
				busca_nombre(arbol, raiz->obtener_derecha(), nombre);
			}
		}
private: System::Void boton_buscar_ad_Click(System::Object^  sender, System::EventArgs^  e) {
	listView1->Items->Clear();
	String^ nombre = (BUSCAR_CAJA->Text)->ToUpper();
	ARBOL* arbol = new ARBOL();
	CARGAR_NOMBRE(arbol);
	NODO* puntero = arbol->obtener_raiz();
	busca_nombre(arbol,puntero,nombre);
	
}

private: System::Void boton_ver_Click(System::Object^  sender, System::EventArgs^  e) {
	
	ARBOL* arbol = new ARBOL();
	ListView^ list = listView1;
	for (int i = 0; i < list->Items->Count; i++) {
		if (list->Items[i]->Selected) {
			String^ dni = list->Items[i]->Text;

			Form^ resultado = gcnew RESULTADO(dni);

			resultado->Show();
		}
	}
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	ARBOL* arbol = new ARBOL();
	NODO* nodo = new NODO();
	ListView^ list = listView1;
	for (int i = 0; i < list->Items->Count; i++) {
		if (list->Items[i]->Selected) {
			String^ DNI = list->Items[i]->Text;
			std::string dni;
			MarshalString(DNI, dni);
			CARGAR_DNI(arbol);
			std::string direccion;
			String^ DIRECCION;
			nodo = arbol->buscar(dni);
			direccion = nodo->obtener_direccion();
			DIRECCION = gcnew String(direccion.c_str());
			DIRECCION_CAJA->Text = DIRECCION;			
		}
	}
}


};
}
