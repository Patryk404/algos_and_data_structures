#pragma once

namespace kwadraty {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OknoGlowne
	/// </summary>
	public ref class OknoGlowne : public System::Windows::Forms::Form
	{
	public:
		OknoGlowne(void)
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
		~OknoGlowne()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bRysuj;
	private: System::Windows::Forms::Button^  bCzysc;
	protected:


	protected:


	private:
		/// <summary>
		/// Required designer variable.

	public:
		int				paramN;		// kod dopisany
		float			paramX;		// kod dopisany
		float			paramY;		// kod dopisany
		float			paramLG;	// kod dopisany

		Graphics^		g1;				// kod dopisany
		Pen^			pioro;			// kod dopisany
	private: System::Windows::Forms::TextBox^  txt1;
	public:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txt3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt4;

			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->bRysuj = (gcnew System::Windows::Forms::Button());
				 this->bCzysc = (gcnew System::Windows::Forms::Button());
				 this->txt1 = (gcnew System::Windows::Forms::TextBox());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->txt2 = (gcnew System::Windows::Forms::TextBox());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->txt3 = (gcnew System::Windows::Forms::TextBox());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->txt4 = (gcnew System::Windows::Forms::TextBox());
				 this->SuspendLayout();
				 // 
				 // bRysuj
				 // 
				 this->bRysuj->Location = System::Drawing::Point(12, 12);
				 this->bRysuj->Name = L"bRysuj";
				 this->bRysuj->Size = System::Drawing::Size(75, 23);
				 this->bRysuj->TabIndex = 0;
				 this->bRysuj->Text = L"Rysuj";
				 this->bRysuj->UseVisualStyleBackColor = true;
				 this->bRysuj->Click += gcnew System::EventHandler(this, &OknoGlowne::bRysuj_Click_1);
				 // 
				 // bCzysc
				 // 
				 this->bCzysc->Location = System::Drawing::Point(93, 12);
				 this->bCzysc->Name = L"bCzysc";
				 this->bCzysc->Size = System::Drawing::Size(75, 23);
				 this->bCzysc->TabIndex = 1;
				 this->bCzysc->Text = L"Czyść";
				 this->bCzysc->UseVisualStyleBackColor = true;
				 this->bCzysc->Click += gcnew System::EventHandler(this, &OknoGlowne::bCzysc_Click);
				 // 
				 // txt1
				 // 
				 this->txt1->AcceptsReturn = true;
				 this->txt1->AcceptsTab = true;
				 this->txt1->Location = System::Drawing::Point(258, 19);
				 this->txt1->Name = L"txt1";
				 this->txt1->Size = System::Drawing::Size(106, 20);
				 this->txt1->TabIndex = 2;
				 this->txt1->Text = L"10";
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(174, 22);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(60, 13);
				 this->label1->TabIndex = 3;
				 this->label1->Text = L"Parametr N";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(369, 25);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(66, 13);
				 this->label2->TabIndex = 5;
				 this->label2->Text = L"Parametr LG";
				 // 
				 // txt2
				 // 
				 this->txt2->AcceptsReturn = true;
				 this->txt2->AcceptsTab = true;
				 this->txt2->Location = System::Drawing::Point(453, 22);
				 this->txt2->Name = L"txt2";
				 this->txt2->Size = System::Drawing::Size(106, 20);
				 this->txt2->TabIndex = 4;
				 this->txt2->Text = L"250";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(174, 48);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(59, 13);
				 this->label3->TabIndex = 7;
				 this->label3->Text = L"Parametr X";
				 // 
				 // txt3
				 // 
				 this->txt3->AcceptsReturn = true;
				 this->txt3->AcceptsTab = true;
				 this->txt3->Location = System::Drawing::Point(258, 45);
				 this->txt3->Name = L"txt3";
				 this->txt3->Size = System::Drawing::Size(106, 20);
				 this->txt3->TabIndex = 6;
				 this->txt3->Text = L"70";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(376, 48);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(59, 13);
				 this->label4->TabIndex = 9;
				 this->label4->Text = L"Parametr Y";
				 // 
				 // txt4
				 // 
				 this->txt4->AcceptsReturn = true;
				 this->txt4->AcceptsTab = true;
				 this->txt4->Location = System::Drawing::Point(453, 45);
				 this->txt4->Name = L"txt4";
				 this->txt4->Size = System::Drawing::Size(106, 20);
				 this->txt4->TabIndex = 8;
				 this->txt4->Text = L"70";
				 // 
				 // OknoGlowne
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(728, 513);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->txt4);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->txt3);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->txt2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->txt1);
				 this->Controls->Add(this->bCzysc);
				 this->Controls->Add(this->bRysuj);
				 this->Name = L"OknoGlowne";
				 this->Text = L"Algorytmy  wydanie VI - Kwadraty";
				 this->Load += gcnew System::EventHandler(this, &OknoGlowne::OknoGlowne_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion


			 // kod dopisany:
			 void KWADRATY(int n, float lg, float x, float y) { // kod dopisany, zakładamy parzystą liczbę kwadratów
				 if (n > 0)
				 {
					 g1->DrawLine(pioro, x, y, x + lg, y);
					 g1->DrawLine(pioro, x + lg, y, x + lg, y + lg);
					 g1->DrawLine(pioro, x + lg, y + lg, x, y + lg);
					 g1->DrawLine(pioro, x, y + lg, x, y + lg / 2);
					 g1->DrawLine(pioro, x, y + lg / 2, x + lg / 2, y + lg);
					 g1->DrawLine(pioro, x + lg / 2, y + lg, x + lg, y + lg / 2);
					 g1->DrawLine(pioro, x + lg, y + lg / 2, x + lg / 2, y);
					 g1->DrawLine(pioro, x + lg / 2, y, x + lg / 4, y + lg / 4);
					 KWADRATY(n - 1, lg / 2, x + lg / 4, y + lg / 4);
					 g1->DrawLine(pioro, x + lg / 4, y + lg / 4, x, y + lg / 2);
					 g1->DrawLine(pioro, x, y + lg / 2, x, y);
				 }
			 }


	private: System::Void OknoGlowne_Load(System::Object^  sender, System::EventArgs^  e) {
		g1 = this->CreateGraphics();						// kod dopisany
		pioro = gcnew Pen(System::Drawing::Color::Black);	// kod dopisany
	}


	private: System::Void bRysuj_Click_1(System::Object^  sender, System::EventArgs^  e) {

		paramN = System::Int32::Parse(txt1->Text);
		paramLG = System::Double::Parse(txt2->Text);
		paramX = System::Double::Parse(txt3->Text);
		paramY = System::Double::Parse(txt4->Text);


		if (paramN > 0)
			this->KWADRATY(paramN, paramLG, paramX, paramY); // kod dopisany
	}

	private: System::Void bCzysc_Click(System::Object^  sender, System::EventArgs^  e) {
		g1->Clear(this->BackColor);
	}
	};
}
