#pragma once
#include "EPRE.h"
#include "EPOS.h"
#include "TDOC.h"
#include "TNDOC.h"
#include "ESTUDIANTE.h"
#include "TRABAJADOR.h"

namespace Proyecto2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(137, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"MENU";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 168);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 60);
			this->button5->TabIndex = 5;
			this->button5->Text = L"PERSONAL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(303, 168);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 60);
			this->button6->TabIndex = 6;
			this->button6->Text = L"TRABAJADOR";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 329);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ formulario = gcnew EPRE();
		formulario->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ formulario = gcnew EPOS();
	formulario->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ formulario = gcnew TDOC();
	formulario->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ formulario = gcnew TNDOC();
	formulario->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ formulario = gcnew ESTUDIANTE();
	formulario->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ formulario = gcnew TRABAJADOR();
	formulario->Show();
}
};
}
