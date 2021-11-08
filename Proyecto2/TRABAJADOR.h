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
	/// Resumen de TRABAJADOR
	/// </summary>
	public ref class TRABAJADOR : public System::Windows::Forms::Form
	{
	public:
		TRABAJADOR(void)
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
		~TRABAJADOR()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(299, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CERRAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TRABAJADOR::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 72);
			this->button2->TabIndex = 1;
			this->button2->Text = L"DOCENTE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TRABAJADOR::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(277, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 72);
			this->button3->TabIndex = 2;
			this->button3->Text = L"NO DOCENTE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TRABAJADOR::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(129, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 26);
			this->label1->TabIndex = 4;
			this->label1->Text = L"MENU";
			// 
			// TRABAJADOR
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 273);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"TRABAJADOR";
			this->Text = L"TRABAJADOR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ formulario = gcnew TDOC();
		formulario->Show();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ formulario = gcnew TNDOC();
	formulario->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
