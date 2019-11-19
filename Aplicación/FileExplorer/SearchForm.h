#pragma once
#include "FUNCIONA.h"
#include<fstream>
namespace FileExplorer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Resumen de SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			objArbol = new ARBOL();
			treeView1 = gcnew TreeView();
		}
		void setTreeNode(TreeView^ nuevo) {
			treeView1 = nuevo;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::ListBox^ listBox_View;

	protected:

	private: System::Windows::Forms::Button^ button_Buscar;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_NameSearch;

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Columna_Nombre;
	private: System::Windows::Forms::ColumnHeader^ Columna_FechaCre;
	private: System::Windows::Forms::ColumnHeader^ Columna_FechaMod;
	private: System::Windows::Forms::ColumnHeader^ column_Tipo;
	private: System::Windows::Forms::ColumnHeader^ column_Size;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button_TerminarBusqueda;

	private:
		/// <summary>
		ARBOL* objArbol; 
		TreeView^ treeView1;
		DNIe^ DNIeForm;
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
			this->Title = (gcnew System::Windows::Forms::Label());
			this->listBox_View = (gcnew System::Windows::Forms::ListBox());
			this->button_Buscar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_NameSearch = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Columna_Nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->Columna_FechaCre = (gcnew System::Windows::Forms::ColumnHeader());
			this->Columna_FechaMod = (gcnew System::Windows::Forms::ColumnHeader());
			this->column_Tipo = (gcnew System::Windows::Forms::ColumnHeader());
			this->column_Size = (gcnew System::Windows::Forms::ColumnHeader());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button_TerminarBusqueda = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->BackColor = System::Drawing::Color::Cyan;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->Title->Location = System::Drawing::Point(1, 0);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(629, 48);
			this->Title->TabIndex = 57;
			this->Title->Text = L"Fomulario de busqueda";
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listBox_View
			// 
			this->listBox_View->FormattingEnabled = true;
			this->listBox_View->Location = System::Drawing::Point(397, 138);
			this->listBox_View->Name = L"listBox_View";
			this->listBox_View->Size = System::Drawing::Size(230, 277);
			this->listBox_View->TabIndex = 58;
			// 
			// button_Buscar
			// 
			this->button_Buscar->Location = System::Drawing::Point(516, 89);
			this->button_Buscar->Name = L"button_Buscar";
			this->button_Buscar->Size = System::Drawing::Size(90, 33);
			this->button_Buscar->TabIndex = 59;
			this->button_Buscar->Text = L"Buscar";
			this->button_Buscar->UseVisualStyleBackColor = true;
			this->button_Buscar->Click += gcnew System::EventHandler(this, &SearchForm::button_Buscar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(12, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 16);
			this->label1->TabIndex = 60;
			this->label1->Text = L"Elige el criterio de busqueda:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(267, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 16);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Digite la información a buscar:";
			// 
			// textBox_NameSearch
			// 
			this->textBox_NameSearch->Location = System::Drawing::Point(270, 97);
			this->textBox_NameSearch->Name = L"textBox_NameSearch";
			this->textBox_NameSearch->Size = System::Drawing::Size(209, 20);
			this->textBox_NameSearch->TabIndex = 63;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Columna_Nombre, this->Columna_FechaCre,
					this->Columna_FechaMod, this->column_Tipo, this->column_Size
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(1, 137);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(396, 278);
			this->listView1->TabIndex = 64;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchForm::listView1_SelectedIndexChanged);
			// 
			// Columna_Nombre
			// 
			this->Columna_Nombre->Text = L"Nombre";
			this->Columna_Nombre->Width = 156;
			// 
			// Columna_FechaCre
			// 
			this->Columna_FechaCre->Text = L"Fecha de creación";
			this->Columna_FechaCre->Width = 148;
			// 
			// Columna_FechaMod
			// 
			this->Columna_FechaMod->Text = L"Fecha de modificacion";
			this->Columna_FechaMod->Width = 145;
			// 
			// column_Tipo
			// 
			this->column_Tipo->Text = L"Tipo";
			this->column_Tipo->Width = 108;
			// 
			// column_Size
			// 
			this->column_Size->Text = L"Tamaño";
			this->column_Size->Width = 94;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Nombre", L"DNI" });
			this->comboBox1->Location = System::Drawing::Point(15, 96);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(209, 21);
			this->comboBox1->TabIndex = 65;
			// 
			// button_TerminarBusqueda
			// 
			this->button_TerminarBusqueda->Location = System::Drawing::Point(460, 433);
			this->button_TerminarBusqueda->Name = L"button_TerminarBusqueda";
			this->button_TerminarBusqueda->Size = System::Drawing::Size(146, 39);
			this->button_TerminarBusqueda->TabIndex = 66;
			this->button_TerminarBusqueda->Text = L"Terminar busqueda";
			this->button_TerminarBusqueda->UseVisualStyleBackColor = true;
			this->button_TerminarBusqueda->Click += gcnew System::EventHandler(this, &SearchForm::button_TerminarBusqueda_Click);
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(629, 484);
			this->Controls->Add(this->button_TerminarBusqueda);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox_NameSearch);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_Buscar);
			this->Controls->Add(this->listBox_View);
			this->Controls->Add(this->Title);
			this->Name = L"SearchForm";
			this->Text = L"SearchForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	private: System::Void button_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (comboBox1->Text=="Nombre")
		{
			std::ifstream abrir;
			std::string nombre;
			MarshalString(textBox_NameSearch->Text, nombre);
			//Limpiamos el ListView
			listView1->Items->Clear();
			//Creamos una variable para almacenar la ruta
			String^ documento = gcnew String((BUSCAR(objArbol, abrir, nombre)).c_str());
			//Cargamos al listview los archivos encontrados
			if (documento != "")
			{
				// Divide la ruta absoluta en partes
				array<String^>^ nombreCarpeta = documento->Split('\\');
				// Create ListViewItem
				ListViewItem^ lvi = listView1->Items->Add(nombreCarpeta[nombreCarpeta->Length - 1]);
				// Create subitem with creation time
				DateTime^ creation = File::GetCreationTime(documento);
				// Introduce fecha creacion
				lvi->SubItems->Add(creation->ToString());
				// Create subitem with modify time
				DateTime^ modify = File::GetLastWriteTime(documento);
				// Introduce modify time in ListViewItem
				lvi->SubItems->Add(modify->ToString());
				//Create a function to access file
				auto fileSize = gcnew FileInfo(documento);
				//Introduce the file type
				lvi->SubItems->Add(Convert::ToString(fileSize->Attributes));
				//Introduce the size  in ListViewItem
				lvi->SubItems->Add(Convert::ToString(fileSize->Length));
			}
			else {
				MessageBox::Show("No existe el archivo");
			}
		}
		else if (comboBox1->Text=="DNI")
		{
			std::ifstream abrir;
			std::string DNI;
			MarshalString(textBox_NameSearch->Text, DNI);
			//Limpiamos el ListView
			listView1->Items->Clear();
			//Creamos una variable para almacenar la ruta
			String^ documento = gcnew String((BUSCAR_DNI(objArbol, abrir, DNI)).c_str());
			//Cargamos al listview los archivos encontrados
			if (documento != "")
			{
				// Divide la ruta absoluta en partes
				array<String^>^ nombreCarpeta = documento->Split('\\');
				// Create ListViewItem
				ListViewItem^ lvi = listView1->Items->Add(nombreCarpeta[nombreCarpeta->Length - 1]);
				// Create subitem with creation time
				DateTime^ creation = File::GetCreationTime(documento);
				// Introduce fecha creacion
				lvi->SubItems->Add(creation->ToString());
				// Create subitem with modify time
				DateTime^ modify = File::GetLastWriteTime(documento);
				// Introduce modify time in ListViewItem
				lvi->SubItems->Add(modify->ToString());
				//Create a function to access file
				auto fileSize = gcnew FileInfo(documento);
				//Introduce the file type
				lvi->SubItems->Add(Convert::ToString(fileSize->Attributes));
				//Introduce the size  in ListViewItem
				lvi->SubItems->Add(Convert::ToString(fileSize->Length));
			}
			else {
				MessageBox::Show("No existe el archivo");
			}
		}
		
	}
		   //Función para leer por completo un texto de forma vertical
		   void readLineVer(String^ line, StreamReader^ sr) {
			   if (line = sr->ReadLine())
			   {
				   //Agregamos al listBox
				   listBox_View->Items->Add(line);
				   //
				   readLineVer(line, sr);
			   }
		   }
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//TreeNode^ selectedDirectory = treeView1->SelectedNode;
	////Recorre los items  mostrados en el ListView
	//for (int i = 0; i < listView1->Items->Count; i++)
	//{
	//	// Si encuentra uno que este seleccionado lo abre
	//	if (listView1->Items[i]->Selected)
	//	{
	//		//Creamos una variable para leer el contenido del texto
	//		StreamReader^ sr = gcnew StreamReader(selectedDirectory->Name + "\\" + listView1->Items[i]->Text);
	//		//Leemos el contenido de la primera linea y lo almacenamos en un string
	//		String^ line = sr->ReadLine();
	//		//Agregamos los datos
	//		DNIeForm->setNombres(line);
	//		line = sr->ReadLine();
	//		DNIeForm->setPrimerApellido(line);
	//		line = sr->ReadLine();
	//		DNIeForm->setSegundoApellido(line);
	//		line = sr->ReadLine();
	//		DNIeForm->setCUI(line);
	//		line = sr->ReadLine();
	//		DNIeForm->setSexo(line);
	//		line = sr->ReadLine();
	//		DNIeForm->setEstadoCivil(line);
	//		line = sr->ReadLine();
	//		DNIeForm->setFechaNacimiento(line);
	//		sr->Close();
	//		//Abrimos el formulario de DNIe
	//		DNIeForm->Show();
	//	}

	//}
}
private: System::Void button_TerminarBusqueda_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchForm::Hide();
}

};
}
