#pragma once

namespace spirala {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
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


	public:

		float			paramAlpha = 40;				// kod dopisany
		Graphics^		g1;								// kod dopisany
		Pen^			pioro;							// kod dopisany
	private: System::Windows::Forms::Button^  bRysuj;
	private: System::Windows::Forms::TextBox^  txtAlpha;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  bCzyszc;
	public:

	public:

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
			this->txtAlpha = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bCzyszc = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bRysuj
			// 
			this->bRysuj->Location = System::Drawing::Point(28, 12);
			this->bRysuj->Name = L"bRysuj";
			this->bRysuj->Size = System::Drawing::Size(75, 23);
			this->bRysuj->TabIndex = 0;
			this->bRysuj->Text = L"Rysuj";
			this->bRysuj->UseVisualStyleBackColor = true;
			this->bRysuj->Click += gcnew System::EventHandler(this, &OknoGlowne::bRysuj_Click);
			// 
			// txtAlpha
			// 
			this->txtAlpha->Location = System::Drawing::Point(149, 15);
			this->txtAlpha->Name = L"txtAlpha";
			this->txtAlpha->Size = System::Drawing::Size(100, 20);
			this->txtAlpha->TabIndex = 1;
			this->txtAlpha->Text = L"20";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(109, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Alpha";
			// 
			// bCzyszc
			// 
			this->bCzyszc->Location = System::Drawing::Point(271, 12);
			this->bCzyszc->Name = L"bCzyszc";
			this->bCzyszc->Size = System::Drawing::Size(75, 23);
			this->bCzyszc->TabIndex = 3;
			this->bCzyszc->Text = L"Czyść";
			this->bCzyszc->UseVisualStyleBackColor = true;
			this->bCzyszc->Click += gcnew System::EventHandler(this, &OknoGlowne::bCzyszc_Click);
			// 
			// OknoGlowne
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 632);
			this->Controls->Add(this->bCzyszc);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAlpha);
			this->Controls->Add(this->bRysuj);
			this->Name = L"OknoGlowne";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Text = L"Algorytmy wyd. VI - Spirala";
			this->Load += gcnew System::EventHandler(this, &OknoGlowne::OknoGlowne_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void rysuj_spirala(float lg, float x, float y) { // kod dopisany:
			if (lg > 0 && lg > paramAlpha) {
				g1->DrawLine(pioro, x, y, x + lg, y);
				g1->DrawLine(pioro, x + lg, y, x + lg, y + lg);
				g1->DrawLine(pioro, x + lg, y + lg, x + paramAlpha, y + lg);
				g1->DrawLine(pioro, x + paramAlpha, y + lg, x + paramAlpha, y + paramAlpha);
				rysuj_spirala(lg - 2 * paramAlpha, x + paramAlpha, y + paramAlpha);
			}
		}

	private: System::Void OknoGlowne_Load(System::Object^  sender, System::EventArgs^  e) {
		g1 = this->CreateGraphics();						// kod dopisany, pozwala na u¿ywanie bitmapowych instrukcji graficznych
		pioro = gcnew Pen(System::Drawing::Color::Black);	// kod dopisany, pióro
	}
	private: System::Void bRysuj_Click(System::Object^  sender, System::EventArgs^  e) {

		float szer = this->Width;
		paramAlpha = System::Double::Parse(txtAlpha->Text);
		this->rysuj_spirala(szer - szer / 4, 60, 60);

	}
	private: System::Void bCzyszc_Click(System::Object^  sender, System::EventArgs^  e) {
		g1->Clear(this->BackColor);
	}
	};
}
