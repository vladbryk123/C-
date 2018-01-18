#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Text;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;



	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1135, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Play";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::Color::Red;
			this->radioButton1->Location = System::Drawing::Point(1054, 51);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(81, 21);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Player 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			this->radioButton1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::Color::Yellow;
			this->radioButton2->Location = System::Drawing::Point(1054, 78);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 21);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Player 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			this->radioButton2->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->radioButton3->Location = System::Drawing::Point(1054, 105);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(81, 21);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Player 3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			this->radioButton3->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->ForeColor = System::Drawing::Color::Green;
			this->radioButton4->Location = System::Drawing::Point(1054, 132);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(81, 21);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Player 4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			this->radioButton4->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(1002, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 173);
			this->label1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1083, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Roll Dice";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(1222, 733);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)

	{
		Graphics^ p = CreateGraphics();
	
		SolidBrush^ sb1 = gcnew SolidBrush(Color::White);

		Pen^ pen2 = gcnew Pen(Color::Black, 1.0);


		//forward
		for (size_t i = 250; i <370; i += 45)
		{
			p->FillEllipse(sb1, i, 50, 40, 40);
			p->DrawEllipse(pen2, i, 50, 40, 40);
		}

		for (size_t i = 95; i <210; i += 45)
		{
			p->FillEllipse(sb1, 340, i, 40, 40);
			p->DrawEllipse(pen2, 340, i, 40, 40);
		}

		for (size_t i = 95; i <210; i+= 45)
		{
			p->FillEllipse(sb1, 250, i, 40, 40);
			p->DrawEllipse(pen2, 250, i, 40, 40);
		}




		//left
		for (size_t i = 70; i <260; i += 45)
		{
			p->FillEllipse(sb1, i, 230, 40, 40);
			p->DrawEllipse(pen2, i, 230, 40, 40);
		}
		for (size_t i = 230; i <310; i += 45)
		{
			p->FillEllipse(sb1,70, i, 40, 40);
			p->DrawEllipse(pen2, 70, i, 40, 40);
		}
		for (size_t i = 70; i <270; i += 45)
		{
			p->FillEllipse(sb1, i, 320, 40, 40);
			p->DrawEllipse(pen2, i, 320, 40, 40);
		}
		//right

		for (size_t i = 340; i <530; i += 45)
		{
			p->FillEllipse(sb1, i, 230, 40, 40);
			p->DrawEllipse(pen2, i, 230, 40, 40);
		}
		for (size_t i = 275; i <350; i += 45)
		{
			p->FillEllipse(sb1, 520, i, 40, 40);
			p->DrawEllipse(pen2, 520, i, 40, 40);
		}
		for (size_t i = 340; i <520; i += 45)
		{
			p->FillEllipse(sb1, i, 320, 40, 40);
			p->DrawEllipse(pen2, i, 320, 40, 40);
		}
		// down
		
		for (size_t i = 250; i <310; i += 45)
		{
			p->FillEllipse(sb1, i, 500, 40, 40);
			p->DrawEllipse(pen2, i, 500, 40, 40);
		}

		for (size_t i = 365; i <520; i += 45)
		{
			p->FillEllipse(sb1, 340, i, 40, 40);
			p->DrawEllipse(pen2, 340, i, 40, 40);
		}

		for (size_t i = 365; i <470; i += 45)
		{
			p->FillEllipse(sb1, 250, i, 40, 40);
			p->DrawEllipse(pen2, 250, i, 40, 40);
		}

		SolidBrush^ sb2 = gcnew SolidBrush(Color::Red);
		

		for (size_t i = 95; i <260; i += 45)
		{
		p->FillEllipse(sb2, 295, i, 40, 40);
	
		}
	

		SolidBrush^ sb3 = gcnew SolidBrush(Color::Blue);


		for (size_t i = 320; i <470; i += 45)
		{
			p->FillEllipse(sb3, 295, i, 40, 40);

		}
		SolidBrush^ sb4 = gcnew SolidBrush(Color::Yellow);


		for (size_t i = 340; i <490; i += 45)
		{
			p->FillEllipse(sb4, i, 275, 40, 40);

		}
		SolidBrush^ sb5 = gcnew SolidBrush(Color::Green);


		for (size_t i = 115; i <285; i += 45)
		{
			p->FillEllipse(sb5, i, 275, 40, 40);

		}


	
		void DrawRectangleInt(PaintEventArgs^ e);
		{
			
			// Create pen.
			Pen^ blackPen = gcnew Pen(Color::Black, 3.0f);

			// Create location and size of rectangle.
			int x = 750;
			int y = 350;
			int width = 150;
			int height = 150;

			// Draw rectangle to screen.
			p->DrawRectangle(blackPen, x, y, width, height);
			
		}

		






	}

private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
