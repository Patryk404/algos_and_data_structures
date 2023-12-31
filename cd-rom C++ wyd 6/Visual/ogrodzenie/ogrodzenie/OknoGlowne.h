#pragma once

namespace ogrodzenie {

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

	public:

		int				paramN;		// kod dopisany
		float			paramX;		// kod dopisany
		float			paramY;		// kod dopisany
		float			paramLG;	// kod dopisany

		Graphics^		g1;				// kod dopisany
		Pen^			pioro;			// kod dopisany

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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  bRysuj;
	private: System::Windows::Forms::Button^  bCzysc;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtX;
	private: System::Windows::Forms::TextBox^  txtY;
	private: System::Windows::Forms::TextBox^  txtN;
	private: System::Windows::Forms::TextBox^  txtLG;
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
			this->bRysuj = (gcnew System::Windows::Forms::Button());
			this->bCzysc = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtX = (gcnew System::Windows::Forms::TextBox());
			this->txtY = (gcnew System::Windows::Forms::TextBox());
			this->txtN = (gcnew System::Windows::Forms::TextBox());
			this->txtLG = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// bRysuj
			// 
			this->bRysuj->Location = System::Drawing::Point(25, 12);
			this->bRysuj->Name = L"bRysuj";
			this->bRysuj->Size = System::Drawing::Size(75, 23);
			this->bRysuj->TabIndex = 0;
			this->bRysuj->Text = L"Rysuj";
			this->bRysuj->UseVisualStyleBackColor = true;
			this->bRysuj->Click += gcnew System::EventHandler(this, &OknoGlowne::bRysuj_Click);
			// 
			// bCzysc
			// 
			this->bCzysc->Location = System::Drawing::Point(25, 41);
			this->bCzysc->Name = L"bCzysc";
			this->bCzysc->Size = System::Drawing::Size(75, 23);
			this->bCzysc->TabIndex = 1;
			this->bCzysc->Text = L"Czyść";
			this->bCzysc->UseVisualStyleBackColor = true;
			this->bCzysc->Click += gcnew System::EventHandler(this, &OknoGlowne::bCzysc_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(111, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(241, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"N";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(234, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"LG";
			// 
			// txtX
			// 
			this->txtX->Location = System::Drawing::Point(132, 13);
			this->txtX->Name = L"txtX";
			this->txtX->Size = System::Drawing::Size(100, 20);
			this->txtX->TabIndex = 6;
			this->txtX->Text = L"30";
			// 
			// txtY
			// 
			this->txtY->Location = System::Drawing::Point(132, 39);
			this->txtY->Name = L"txtY";
			this->txtY->Size = System::Drawing::Size(100, 20);
			this->txtY->TabIndex = 7;
			this->txtY->Text = L"80";
			// 
			// txtN
			// 
			this->txtN->Location = System::Drawing::Point(259, 14);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(100, 20);
			this->txtN->TabIndex = 8;
			this->txtN->Text = L"3";
			// 
			// txtLG
			// 
			this->txtLG->Location = System::Drawing::Point(259, 39);
			this->txtLG->Name = L"txtLG";
			this->txtLG->Size = System::Drawing::Size(100, 20);
			this->txtLG->TabIndex = 9;
			this->txtLG->Text = L"400";
			// 
			// OknoGlowne
			// 
			this->ClientSize = System::Drawing::Size(586, 537);
			this->Controls->Add(this->txtLG);
			this->Controls->Add(this->txtN);
			this->Controls->Add(this->txtY);
			this->Controls->Add(this->txtX);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bCzysc);
			this->Controls->Add(this->bRysuj);
			this->Name = L"OknoGlowne";
			this->Text = L"Algorytmy wydanie VI - Ogrodzenie";
			this->Load += gcnew System::EventHandler(this, &OknoGlowne::OknoGlowne_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		// kod dopisany:
		void rysuj_wzorek(int n, float lg, float x, float y) { // kod dopisany, n = liczba podzia³ów
			if (n > 0) {
				// Kwadrat 
				g1->DrawLine(pioro, x, y, x + lg, y);
				g1->DrawLine(pioro, x + lg, y, x + lg, y + lg);
				g1->DrawLine(pioro, x + lg, y + lg, x, y + lg);
				g1->DrawLine(pioro, x, y + lg, x, y);

				// 4 ko³a wewnêtrzne

				g1->DrawEllipse(pioro, x, y, lg / 2, lg / 2);
				g1->DrawEllipse(pioro, x + lg / 2, y, lg / 2, lg / 2);
				g1->DrawEllipse(pioro, x, y + lg / 2, lg / 2, lg / 2);
				g1->DrawEllipse(pioro, x + lg / 2, y + lg / 2, lg / 2, lg / 2);

				// wzorki w ko³ach wewnêtrznych powielaj¹ schemat g³ówny, ale w mniejszym rozmiarze
				rysuj_wzorek(n - 1, lg / 2, x, y);
				rysuj_wzorek(n - 1, lg / 2, x + lg / 2, y);
				rysuj_wzorek(n - 1, lg / 2, x, y + lg / 2);
				rysuj_wzorek(n - 1, lg / 2, x + lg / 2, y + lg / 2);
			}
		}



	private: System::Void bRysuj_Click(System::Object^  sender, System::EventArgs^  e) {
		paramN = System::Int32::Parse(txtN->Text);
		paramLG = System::Double::Parse(txtLG->Text);
		paramX = System::Double::Parse(txtX->Text);
		paramY = System::Double::Parse(txtY->Text);


		if (paramN > 0)
			this->rysuj_wzorek(paramN, paramLG, paramX, paramY); // kod dopisany



	}
	private: System::Void OknoGlowne_Load(System::Object^  sender, System::EventArgs^  e) {
		g1 = this->CreateGraphics();						// kod dopisany
		pioro = gcnew Pen(System::Drawing::Color::Black);	// kod dopisany
	}
	private: System::Void bCzysc_Click(System::Object^  sender, System::EventArgs^  e) {
		g1->Clear(this->BackColor);
	}
	};
}
