#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ eentrada;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ Entrada;
	private: System::Windows::Forms::TextBox^ SALIDA;
	private: System::Windows::Forms::Label^ salidaa;



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
			this->eentrada = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Entrada = (gcnew System::Windows::Forms::TextBox());
			this->SALIDA = (gcnew System::Windows::Forms::TextBox());
			this->salidaa = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// eentrada
			// 
			this->eentrada->AutoSize = true;
			this->eentrada->Location = System::Drawing::Point(26, 33);
			this->eentrada->Name = L"eentrada";
			this->eentrada->Size = System::Drawing::Size(44, 13);
			this->eentrada->TabIndex = 0;
			this->eentrada->Text = L"Entrada";
			this->eentrada->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(192, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"SUMAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Entrada
			// 
			this->Entrada->Location = System::Drawing::Point(29, 62);
			this->Entrada->Name = L"Entrada";
			this->Entrada->Size = System::Drawing::Size(53, 20);
			this->Entrada->TabIndex = 2;
			this->Entrada->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// SALIDA
			// 
			this->SALIDA->Location = System::Drawing::Point(343, 49);
			this->SALIDA->Name = L"SALIDA";
			this->SALIDA->Size = System::Drawing::Size(302, 20);
			this->SALIDA->TabIndex = 3;
			this->SALIDA->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// salidaa
			// 
			this->salidaa->AutoSize = true;
			this->salidaa->Location = System::Drawing::Point(351, 33);
			this->salidaa->Name = L"salidaa";
			this->salidaa->Size = System::Drawing::Size(45, 13);
			this->salidaa->TabIndex = 4;
			this->salidaa->Text = L"SALIDA";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 382);
			this->Controls->Add(this->salidaa);
			this->Controls->Add(this->SALIDA);
			this->Controls->Add(this->Entrada);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->eentrada);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = Convert::ToInt32(Entrada->Text);
	int result = n + 1;

	//String^ a = Convert::ToString(Entrada->Text);
	SALIDA->AppendText(String::Format("suma+1 de: {0} = {1}\r\n", n, result));
	//SALIDA->Text = a;
}
};
}
