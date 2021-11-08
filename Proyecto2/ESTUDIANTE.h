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
	/// Resumen de ESTUDIANTE
	/// </summary>
	public ref class ESTUDIANTE : public System::Windows::Forms::Form
	{
	public:
		ESTUDIANTE(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ESTUDIANTE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(123, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 26);
			this->label1->TabIndex = 8;
			this->label1->Text = L"MENU";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(271, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 72);
			this->button3->TabIndex = 7;
			this->button3->Text = L"POSTGRADO";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ESTUDIANTE::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 72);
			this->button2->TabIndex = 6;
			this->button2->Text = L"PREGRADO";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ESTUDIANTE::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(301, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"CERRAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ESTUDIANTE::button1_Click);
			// 
			// ESTUDIANTE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(388, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ESTUDIANTE";
			this->Text = L"ESTUDIANTE";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ formulario = gcnew EPOS();
		formulario->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ formulario = gcnew EPRE();
	formulario->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
