#pragma once

namespace PA_Lab5_FranciscoMorales_1223319 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  generar_Btn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  arreglo_Lbl;
	private: System::Windows::Forms::TextBox^  cantidad_Tbx;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  numero_Tbx;

	private: System::Windows::Forms::Button^  buscar_Btn;
	private: System::Windows::Forms::Label^  ordenado_Lbl;
	private: System::Windows::Forms::Label^  hash_Lbl;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  hash_Rbtn;

	private: System::Windows::Forms::RadioButton^  binaria_Rbtn;

	private: System::Windows::Forms::RadioButton^  secuencial_Rbtn;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->generar_Btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->arreglo_Lbl = (gcnew System::Windows::Forms::Label());
			this->cantidad_Tbx = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numero_Tbx = (gcnew System::Windows::Forms::TextBox());
			this->buscar_Btn = (gcnew System::Windows::Forms::Button());
			this->ordenado_Lbl = (gcnew System::Windows::Forms::Label());
			this->hash_Lbl = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->hash_Rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->binaria_Rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->secuencial_Rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// generar_Btn
			// 
			this->generar_Btn->Location = System::Drawing::Point(282, 21);
			this->generar_Btn->Name = L"generar_Btn";
			this->generar_Btn->Size = System::Drawing::Size(94, 23);
			this->generar_Btn->TabIndex = 0;
			this->generar_Btn->Text = L"Generar arreglo";
			this->generar_Btn->UseVisualStyleBackColor = true;
			this->generar_Btn->Click += gcnew System::EventHandler(this, &MyForm::generar_Btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese la cantidad de números:";
			// 
			// arreglo_Lbl
			// 
			this->arreglo_Lbl->AutoSize = true;
			this->arreglo_Lbl->Location = System::Drawing::Point(12, 78);
			this->arreglo_Lbl->Name = L"arreglo_Lbl";
			this->arreglo_Lbl->Size = System::Drawing::Size(88, 13);
			this->arreglo_Lbl->TabIndex = 2;
			this->arreglo_Lbl->Text = L"<Arreglo original>";
			// 
			// cantidad_Tbx
			// 
			this->cantidad_Tbx->Location = System::Drawing::Point(176, 21);
			this->cantidad_Tbx->Name = L"cantidad_Tbx";
			this->cantidad_Tbx->Size = System::Drawing::Size(100, 20);
			this->cantidad_Tbx->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Valor a buscar:";
			// 
			// numero_Tbx
			// 
			this->numero_Tbx->Location = System::Drawing::Point(120, 255);
			this->numero_Tbx->Name = L"numero_Tbx";
			this->numero_Tbx->Size = System::Drawing::Size(100, 20);
			this->numero_Tbx->TabIndex = 5;
			// 
			// buscar_Btn
			// 
			this->buscar_Btn->Enabled = false;
			this->buscar_Btn->Location = System::Drawing::Point(237, 253);
			this->buscar_Btn->Name = L"buscar_Btn";
			this->buscar_Btn->Size = System::Drawing::Size(94, 23);
			this->buscar_Btn->TabIndex = 6;
			this->buscar_Btn->Text = L"Buscar";
			this->buscar_Btn->UseVisualStyleBackColor = true;
			this->buscar_Btn->Click += gcnew System::EventHandler(this, &MyForm::buscar_Btn_Click);
			// 
			// ordenado_Lbl
			// 
			this->ordenado_Lbl->AutoSize = true;
			this->ordenado_Lbl->Location = System::Drawing::Point(12, 136);
			this->ordenado_Lbl->Name = L"ordenado_Lbl";
			this->ordenado_Lbl->Size = System::Drawing::Size(100, 13);
			this->ordenado_Lbl->TabIndex = 7;
			this->ordenado_Lbl->Text = L"<Arreglo ordenado>";
			// 
			// hash_Lbl
			// 
			this->hash_Lbl->AutoSize = true;
			this->hash_Lbl->Location = System::Drawing::Point(13, 195);
			this->hash_Lbl->Name = L"hash_Lbl";
			this->hash_Lbl->Size = System::Drawing::Size(93, 13);
			this->hash_Lbl->TabIndex = 8;
			this->hash_Lbl->Text = L"<Arreglo en hash>";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Arreglo original:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Arreglo ordenado:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Arreglo en hash:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->hash_Rbtn);
			this->groupBox1->Controls->Add(this->binaria_Rbtn);
			this->groupBox1->Controls->Add(this->secuencial_Rbtn);
			this->groupBox1->Location = System::Drawing::Point(94, 310);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 129);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Método de búsqueda:";
			// 
			// hash_Rbtn
			// 
			this->hash_Rbtn->AutoSize = true;
			this->hash_Rbtn->Location = System::Drawing::Point(6, 95);
			this->hash_Rbtn->Name = L"hash_Rbtn";
			this->hash_Rbtn->Size = System::Drawing::Size(85, 17);
			this->hash_Rbtn->TabIndex = 2;
			this->hash_Rbtn->Text = L"Tablas Hash";
			this->hash_Rbtn->UseVisualStyleBackColor = true;
			// 
			// binaria_Rbtn
			// 
			this->binaria_Rbtn->AutoSize = true;
			this->binaria_Rbtn->Location = System::Drawing::Point(6, 63);
			this->binaria_Rbtn->Name = L"binaria_Rbtn";
			this->binaria_Rbtn->Size = System::Drawing::Size(57, 17);
			this->binaria_Rbtn->TabIndex = 1;
			this->binaria_Rbtn->Text = L"Binaria";
			this->binaria_Rbtn->UseVisualStyleBackColor = true;
			// 
			// secuencial_Rbtn
			// 
			this->secuencial_Rbtn->AutoSize = true;
			this->secuencial_Rbtn->Checked = true;
			this->secuencial_Rbtn->Location = System::Drawing::Point(6, 31);
			this->secuencial_Rbtn->Name = L"secuencial_Rbtn";
			this->secuencial_Rbtn->Size = System::Drawing::Size(78, 17);
			this->secuencial_Rbtn->TabIndex = 0;
			this->secuencial_Rbtn->TabStop = true;
			this->secuencial_Rbtn->Text = L"Secuencial";
			this->secuencial_Rbtn->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 461);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->hash_Lbl);
			this->Controls->Add(this->ordenado_Lbl);
			this->Controls->Add(this->buscar_Btn);
			this->Controls->Add(this->numero_Tbx);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cantidad_Tbx);
			this->Controls->Add(this->arreglo_Lbl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->generar_Btn);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: ArrayList^ arreglo;
		private: ArrayList^ arregloOrdenado;
		private: Hashtable^ tablaHash;
		private: int size;

		private: System::Void generar_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
			size = System::Convert::ToInt32(cantidad_Tbx->Text);
			generarNúmerosAleatorios();
			mostrarNúmeros();
			buscar_Btn->Enabled = true;
		}

		private: System::Void generarNúmerosAleatorios() {
			arreglo = gcnew ArrayList(size);
			Random^ rng = gcnew Random();
			for (int i = 0; i < size; i++) {
				arreglo->Add(rng->Next(0, 100));
			}
			arregloOrdenado = gcnew ArrayList(arreglo);
			QuickSort(0, size - 1);
			LlenarTablaHash();
		}

		private: System::Void mostrarNúmeros() {
			String^ valores = "";
			for each (int n in arreglo) {
				valores += System::Convert::ToString(n) + "  ";
			}
			arreglo_Lbl->Text = valores;
			valores = "";
			for each (int n in arregloOrdenado) {
				valores += System::Convert::ToString(n) + "  ";
			}
			ordenado_Lbl->Text = valores;
			valores = "";
			for (int i = 0; i < size * 2; i++) {
				if (tablaHash[i] != nullptr) {
					if (Convert::ToInt32(tablaHash[i]) < 10) {
						valores += "  ";
					}
					valores += System::Convert::ToString(tablaHash[i]) + "  ";
				}
				else {
					valores += "----  ";
				}
				if (i == size - 1) {
					valores += "\n";
				}
			}
			hash_Lbl->Text = valores;
		}

		private: System::Void LlenarTablaHash() {
			tablaHash = gcnew Hashtable(size * 2);
			int llave = 0;
			for each (int n in arreglo) {
				llave = n % (size * 2);
				while (tablaHash[llave] != nullptr) {
					if (llave == (size * 2) - 1) {
						llave = 0;
					}
					else {
						llave++;
					}
				}
				tablaHash->Add(llave, n);
			}
		}

		private: System::Void buscar_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
			Stopwatch^ tiempo = gcnew Stopwatch();
			int n = System::Convert::ToInt32(numero_Tbx->Text);
			int pos = 0;
			String^ lugar = "";
			String^ método = "";
			if (secuencial_Rbtn->Checked) {
				lugar = "original.";
				método = "Búsqueda secuencial";
				tiempo->Start();
				pos = BúsquedaSecuencial(n);
				tiempo->Stop();
			}
			else if (binaria_Rbtn->Checked) {
				lugar = "ordenado.";
				método = "Búsqueda binaria";
				tiempo->Start();
				pos = BúsquedaBinaria(n, 0, size - 1);
				tiempo->Stop();
			}
			else {
				lugar = "en hash.";
				método = "Tabla Hash";
				tiempo->Start();
				pos = PosiciónEnHash(n);
				tiempo->Stop();
			}
			if (pos == -1) {
				MessageBox::Show("No se encontró el número", "Fin de la búsqueda");
			}
			else {
				MessageBox::Show("El número se encuentra en la posición " + (pos + 1) + " del arreglo " + lugar, "Fin de la búsqueda");
			}
			MessageBox::Show("Tiempo en encontrar: \n" + tiempo->Elapsed, método);
		}

		private: System::Int32 BúsquedaSecuencial(int n) {
			int posición = -1;
			for (int i = 0; i < size; i++) {
				if (arreglo[i]->Equals(n)) {
					posición = i;
					i = size;
				}
			}
			return posición;
		}

		private: System::Int32 BúsquedaBinaria(int n, int inicio, int fin) {
			if (inicio <= fin) {
				int pivote = inicio + (fin - inicio) / 2;
				if (arregloOrdenado[pivote]->Equals(n)) {
					return pivote;
				}
				else if (Convert::ToInt32(arregloOrdenado[pivote]) < n) {
					return BúsquedaBinaria(n, pivote + 1, fin);
				}
				else {
					return BúsquedaBinaria(n, inicio, pivote - 1);
				}
			}
			else {
				return -1;
			}
		}

		private: System::Int32 PosiciónEnHash(int n) {
			int posición = n % (size * 2);
			while (tablaHash[posición] != nullptr) {
				if (tablaHash[posición]->Equals(n)) {
					return posición;
				}
				else {
					if (posición == (size * 2) - 1) {
						posición = 0;
					}
					else {
						posición++;
					}
				}
			}
			return -1;
		}

		private: System::Void QuickSort(int inicio, int fin) {
			if (inicio != fin) {
				int izquierda = inicio;
				int derecha = fin;
				int aux = 0;
				while (izquierda != derecha) {
					while (Convert::ToInt32(arregloOrdenado[derecha]) > Convert::ToInt32(arregloOrdenado[inicio]) && izquierda != derecha) {
						derecha--;
					}
					if (izquierda != derecha) {
						while (Convert::ToInt32(arregloOrdenado[izquierda]) <= Convert::ToInt32(arregloOrdenado[inicio]) && izquierda != derecha) {
							izquierda++;
						}
					}
					aux = Convert::ToInt32(arregloOrdenado[derecha]);
					arregloOrdenado[derecha] = arregloOrdenado[izquierda];
					arregloOrdenado[izquierda] = aux;
				}
				aux = Convert::ToInt32(arregloOrdenado[derecha]);
				arregloOrdenado[derecha] = arregloOrdenado[inicio];
				arregloOrdenado[inicio] = aux;
				if (derecha != inicio) {
					QuickSort(inicio, derecha - 1);
				}
				if (derecha != fin) {
					QuickSort(derecha + 1, fin);
				}
			}
		}
	};
}
