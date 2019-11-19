#pragma once
#include "RegisterForm.h"
#include "DNIe.h"
#include "SearchForm.h"
#include<iostream>
namespace FileExplorer {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Data;
	using namespace System::Diagnostics;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace System::Windows::Forms;
	using namespace System::Runtime::InteropServices;


	/// <summary>
	/// Resumen de Explorer
	/// </summary>
	public ref class Explorer : public System::Windows::Forms::Form
	{
	public:
		Explorer(void)
		{
			InitializeComponent();
			timer1->Enabled = true;
			//
			//TODO: agregar código de constructor aquí
			//
			RegistroForm = gcnew RegisterForm();
			DNIeForm = gcnew DNIe();
			objArbol = new ARBOL();
			searchForm = gcnew SearchForm();
			cargarCarpetas();
			col = 0;
			//
		}
		

		virtual int Compare(Object^ x, Object^ y)
		{
			return String::Compare((dynamic_cast<ListViewItem^>(x))->SubItems[col]->Text,
				(dynamic_cast<ListViewItem^>(y))->SubItems[col]->Text);
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>

		~Explorer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TreeView^ treeView1;
	protected:
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Columna_Nombre;
	private: System::Windows::Forms::ColumnHeader^ Columna_FechaCre;
	private: System::Windows::Forms::ColumnHeader^ Columna_FechaMod;
	private: System::Windows::Forms::ColumnHeader^ column_Tipo;
	private: System::Windows::Forms::ColumnHeader^ column_Size;

	private: System::Windows::Forms::TextBox^ textBox_Ruta;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ nombreToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ tamañoToolStripMenuItem;


	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ ascendenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descendenteToolStripMenuItem;
	private: System::Windows::Forms::Button^ button_Buscar;




	private: System::Windows::Forms::Button^ button_Agregar;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		RegisterForm^ RegistroForm;
		DNIe^ DNIeForm;
		SearchForm^ searchForm;
		ARBOL* objArbol;
		int col;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox_Nombretxt;
		   

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Explorer::typeid));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Columna_Nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->Columna_FechaCre = (gcnew System::Windows::Forms::ColumnHeader());
			this->Columna_FechaMod = (gcnew System::Windows::Forms::ColumnHeader());
			this->column_Tipo = (gcnew System::Windows::Forms::ColumnHeader());
			this->column_Size = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox_Ruta = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->nombreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tamañoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->ascendenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descendenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_Buscar = (gcnew System::Windows::Forms::Button());
			this->button_Agregar = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox_Nombretxt = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(0, 74);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(203, 486);
			this->treeView1->TabIndex = 0;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Explorer::treeView1_AfterSelect);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Columna_Nombre, this->Columna_FechaCre,
					this->Columna_FechaMod, this->column_Tipo, this->column_Size
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(199, 74);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(655, 486);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &Explorer::listView1_ColumnClick);
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
			// textBox_Ruta
			// 
			this->textBox_Ruta->Location = System::Drawing::Point(0, 44);
			this->textBox_Ruta->Name = L"textBox_Ruta";
			this->textBox_Ruta->Size = System::Drawing::Size(645, 20);
			this->textBox_Ruta->TabIndex = 14;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripDropDownButton1,
					this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1040, 25);
			this->toolStrip1->TabIndex = 15;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nombreToolStripMenuItem,
					this->tamañoToolStripMenuItem
			});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(66, 22);
			this->toolStripDropDownButton1->Text = L"Filtrar";
			// 
			// nombreToolStripMenuItem
			// 
			this->nombreToolStripMenuItem->Name = L"nombreToolStripMenuItem";
			this->nombreToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->nombreToolStripMenuItem->Text = L"Nombre";
			// 
			// tamañoToolStripMenuItem
			// 
			this->tamañoToolStripMenuItem->Name = L"tamañoToolStripMenuItem";
			this->tamañoToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->tamañoToolStripMenuItem->Text = L"Tamaño";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ascendenteToolStripMenuItem,
					this->descendenteToolStripMenuItem
			});
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(79, 22);
			this->toolStripButton1->Text = L"Ordenar";
			// 
			// ascendenteToolStripMenuItem
			// 
			this->ascendenteToolStripMenuItem->Name = L"ascendenteToolStripMenuItem";
			this->ascendenteToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ascendenteToolStripMenuItem->Text = L"Ascendente";
			this->ascendenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Explorer::ascendenteToolStripMenuItem_Click);
			// 
			// descendenteToolStripMenuItem
			// 
			this->descendenteToolStripMenuItem->Name = L"descendenteToolStripMenuItem";
			this->descendenteToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->descendenteToolStripMenuItem->Text = L"Descendente";
			this->descendenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Explorer::descendenteToolStripMenuItem_Click);
			// 
			// button_Buscar
			// 
			this->button_Buscar->BackColor = System::Drawing::Color::LightGray;
			this->button_Buscar->Location = System::Drawing::Point(892, 189);
			this->button_Buscar->Name = L"button_Buscar";
			this->button_Buscar->Size = System::Drawing::Size(110, 36);
			this->button_Buscar->TabIndex = 17;
			this->button_Buscar->Text = L"Buscar";
			this->button_Buscar->UseVisualStyleBackColor = false;
			this->button_Buscar->Click += gcnew System::EventHandler(this, &Explorer::button_Buscar_Click);
			// 
			// button_Agregar
			// 
			this->button_Agregar->BackColor = System::Drawing::Color::LightGray;
			this->button_Agregar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button_Agregar->Location = System::Drawing::Point(892, 97);
			this->button_Agregar->Name = L"button_Agregar";
			this->button_Agregar->Size = System::Drawing::Size(110, 35);
			this->button_Agregar->TabIndex = 18;
			this->button_Agregar->Text = L"Agregar usuario";
			this->button_Agregar->UseVisualStyleBackColor = false;
			this->button_Agregar->Click += gcnew System::EventHandler(this, &Explorer::button_Agregar_Click_1);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Explorer::timer1_Tick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGray;
			this->button2->Location = System::Drawing::Point(892, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 36);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Ver DNIe";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Explorer::button2_Click);
			// 
			// textBox_Nombretxt
			// 
			this->textBox_Nombretxt->ForeColor = System::Drawing::Color::LightGray;
			this->textBox_Nombretxt->Location = System::Drawing::Point(892, 138);
			this->textBox_Nombretxt->Name = L"textBox_Nombretxt";
			this->textBox_Nombretxt->Size = System::Drawing::Size(110, 20);
			this->textBox_Nombretxt->TabIndex = 20;
			this->textBox_Nombretxt->Text = L"Ingrese el DNI";
			this->textBox_Nombretxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Explorer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1040, 561);
			this->Controls->Add(this->textBox_Nombretxt);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button_Agregar);
			this->Controls->Add(this->button_Buscar);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->textBox_Ruta);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->treeView1);
			this->Name = L"Explorer";
			this->Text = L"Archivo Único de Identificación";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Se cargan las carpetas iniciales
		void cargarCarpetas()
		{
			//Limpiamos el TreeView
			treeView1->Nodes->Clear();
			// Cargamos en el array todas las unidades de D:\Ideas\Proyecto 000
			array<String^>^ unidades = Directory::GetDirectories("D:\\Ideas");

			// Recorremos cada unidad para crear el arbol de carpetas
			try
			{
				for each (String ^ unidad in unidades)
				{

					// Guardamos cada unidad
					TreeNode^ nodeUnidad = treeView1->Nodes->Add(unidad, unidad);

					// Creamos las carpetas y subcarpetas
					createSubdirectory(unidad, nodeUnidad);
				}
			}
			catch (IOException ^ e)
			{
				e->Message->ToString();
			}
			catch (UnauthorizedAccessException ^ e)
			{
				e->Message->ToString();
			}
		}
		// Crea subdirectorios - Metodo recursivo
		void createSubdirectory(String^ carpetas, TreeNode^ node1)
		{
			for each (String ^ carpeta in Directory::GetDirectories(carpetas))
			{
				try
				{
					// Divide la ruta absoluta en partes
					array<String^>^ nombreCarpeta = carpeta->Split('\\');

					TreeNode^ node = node1->Nodes->Add(carpeta, nombreCarpeta[nombreCarpeta->Length - 1], 0, 1);

					createSubdirectory(carpeta, node);
				}
				catch (IOException ^ e)
				{
					e->Message->ToString();
				}
				catch (UnauthorizedAccessException ^ e)
				{
					e->Message->ToString();
				}
			}
		}
private: System::Void button_Agregar_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (treeView1->SelectedNode)
	{
	//Abrimos el formulario agregarPersona
	RegistroForm->Show();
	}
	else {
		MessageBox::Show("Usted no ha elegido una carpeta");
	}
}
	   
private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	cargarFiles();
}
	   void cargarFiles()
	   {
		   try
		   {
			   //Limpiamos el ListView
			   listView1->Items->Clear();

			   // Guardamos el directorio seleccionado por el usuario
			   TreeNode^ selectedDirectory = treeView1->SelectedNode;

			   // Cargamos en el array todas las unidades que tiene nuestro equipo
			   array<String^>^ documentos = Directory::GetFiles(selectedDirectory->Name, "*.*");

			   for each (String ^ documento in documentos)
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
		   }
		   catch (UnauthorizedAccessException ^ ex)
		   {
			   MessageBox::Show("No tienes permisos suficientes para acceder a esa unidad");
		   }
		   catch (IOException ^ ex)
		   {
			   MessageBox::Show("Esa unidad no esta lista");
		   }
	   }

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	TreeNode^ selectedDirectory = treeView1->SelectedNode;
	//Recorre los items  mostrados en el ListView
	for (int i = 0; i < listView1->Items->Count; i++)
	{
		// Si encuentra uno que este seleccionado lo abre
		if (listView1->Items[i]->Selected)
		{
			//Creamos una variable para leer el contenido del texto
			StreamReader^ sr = gcnew StreamReader(selectedDirectory->Name + "\\" + listView1->Items[i]->Text);
			//Leemos el contenido de la primera linea y lo almacenamos en un string
			String^ line = sr->ReadLine();
			//Agregamos los datos
			DNIeForm->setNombres(line);
			line = sr->ReadLine();
			DNIeForm->setPrimerApellido(line);
			line = sr->ReadLine();
			DNIeForm->setSegundoApellido(line);
			line = sr->ReadLine();
			DNIeForm->setCUI(line);
			line = sr->ReadLine();
			DNIeForm->setSexo(line);
			line = sr->ReadLine();
			DNIeForm->setEstadoCivil(line);
			line = sr->ReadLine();
			DNIeForm->setFechaNacimiento(line);
			sr->Close();
			//Abrimos el formulario de DNIe
			DNIeForm->Show();
		}
		
	}
}
	   bool cargado = true;
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
    //Visualizamos la ruta de los archivos y carpetas
	TreeNode^ selectedDirectory = treeView1->SelectedNode;
	if (treeView1->SelectedNode)
	{
		//Obtenemos la ruta del nodo seleccionado
		String^ rutaActual = treeView1->SelectedNode->FullPath;
		//Introduce the directory in the textBox
		textBox_Ruta->Text = rutaActual;
		// Recorre los items  mostrados en el ListView
		for (int i = 0; i < listView1->Items->Count; i++)
		{
			// Si encuentra uno que este seleccionado lo abre
			if (listView1->Items[i]->Selected)
			{
				//Almacenamos la dirección de la ruta del archivo en el textBox
				textBox_Ruta->Text = selectedDirectory->Name + "\\" + listView1->Items[i]->Text;
			}
		}
	}
	else { textBox_Ruta->Text = "D:\\Ideas\\Proyecto000"; }
	//----
	//Introducimos datos cada vez que se crea .txt 
	//----
	//variables
	bool compuerta;
	int llaveTemporal;
	//
	compuerta = RegistroForm->getCompuertaAgregar();
	//Verificamos si se ha agregado una persona en el formularioAgregarPersona
	if (compuerta == true)
	{
		//Obtenemos la ruta del nodo seleccionado
		String^ rutaActual = treeView1->SelectedNode->FullPath;
		//Obtenemos el nombre del texto
		String^ nameText = textBox_Nombretxt->Text;
		//Unimos la ruta + el nombre del texto
		String^ rutaFile = rutaActual + "\\" + nameText + ".txt";
		//Creamos el archivo .txt
		StreamWriter^ createFile = File::CreateText(rutaFile);
		try
		{
			//Introducimos los cadenas de texto al archivo .txt
			createFile->WriteLine(RegistroForm->getNombres());
			createFile->WriteLine(RegistroForm->getPrimerApellido());
			createFile->WriteLine(RegistroForm->getSegundoApellido());
			createFile->WriteLine(RegistroForm->getCUI());
			createFile->WriteLine(RegistroForm->getSexo());
			createFile->WriteLine(RegistroForm->getEstadoCivil());
			createFile->WriteLine(RegistroForm->getFechaNacimiento());
		}
		finally
		{
			if (createFile)
				delete (IDisposable^)createFile;
		}
		//Eliminamos los valores ingresados
		textBox_Nombretxt->Text = "";
		RegistroForm->setCompuertaAgregar(false);
		cargarCarpetas();
	}
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


private: System::Void button_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	TreeView^ selectedDirectory ;
	    searchForm->Show();
	    searchForm->setTreeNode(selectedDirectory);
}

private: System::Void listView1_ColumnClick(System::Object^ sender, System::Windows::Forms::ColumnClickEventArgs^ e) {
	
}
private: System::Void ascendenteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	listView1->Sorting = SortOrder::Ascending;
}
private: System::Void descendenteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	listView1->Sorting = SortOrder::Descending;
}
};
}
