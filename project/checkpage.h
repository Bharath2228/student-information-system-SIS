#pragma once
#include "Print.h"
#include<fstream>
#include<iostream>
#include<string.h>
#include<vector>
#include<istream>
#include<string>
#include<sstream>
#include<msclr\marshal_cppstd.h>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for checkpage
	/// </summary>
	public ref class checkpage : public System::Windows::Forms::Form
	{
	public:
		String^ user;
		int pane = 1;



		checkpage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		checkpage(String^ txt, std::string contr)
		{

			InitializeComponent();
			
			std::string con = "0";
			lbwelcome->Text = "Welcome " + txt;
			user = txt;
			String^ us = user;
			
			con = contr;
			if (con == "1")
			{
				pane = 2;
				panel2->Visible = true;
				panel1->Visible = false;
				btedit->Visible = true;
				btedit->Enabled = true;
				std::string usn_s = msclr::interop::marshal_as<std::string>(us);
				datread(usn_s);

			}
			


			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~checkpage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ btlogout;
	private: System::Windows::Forms::Label^ lbwelcome;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ cbbmi;

	private: System::Windows::Forms::CheckBox^ cbrob;
	private: System::Windows::Forms::CheckBox^ cbpc;



	private: System::Windows::Forms::CheckBox^ cbipr;
	private: System::Windows::Forms::CheckBox^ cbc;



	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Button^ btsubmit;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ cboe;
	private: System::Windows::Forms::Button^ btedit;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lb1;


	private: System::Windows::Forms::CheckBox^ cbdsp;
	private: System::Windows::Forms::Label^ lbcl1;
	private: System::Windows::Forms::Label^ lb6;



	private: System::Windows::Forms::Label^ lb5;


	private: System::Windows::Forms::Label^ lb2;
	private: System::Windows::Forms::Label^ lb3;
	private: System::Windows::Forms::Label^ lb4;




	private: System::Windows::Forms::Label^ lbcl2;

	private: System::Windows::Forms::Label^ lbcl3;

	private: System::Windows::Forms::Label^ lbcl4;
	private: System::Windows::Forms::Label^ lbcl5;
	private: System::Windows::Forms::Label^ lbcl6;










	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(checkpage::typeid));
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btlogout = (gcnew System::Windows::Forms::Button());
			this->lbwelcome = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cboe = (gcnew System::Windows::Forms::CheckBox());
			this->cbbmi = (gcnew System::Windows::Forms::CheckBox());
			this->cbrob = (gcnew System::Windows::Forms::CheckBox());
			this->cbpc = (gcnew System::Windows::Forms::CheckBox());
			this->cbipr = (gcnew System::Windows::Forms::CheckBox());
			this->cbc = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cbdsp = (gcnew System::Windows::Forms::CheckBox());
			this->btsubmit = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btedit = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbcl2 = (gcnew System::Windows::Forms::Label());
			this->lbcl3 = (gcnew System::Windows::Forms::Label());
			this->lbcl4 = (gcnew System::Windows::Forms::Label());
			this->lbcl5 = (gcnew System::Windows::Forms::Label());
			this->lbcl6 = (gcnew System::Windows::Forms::Label());
			this->lbcl1 = (gcnew System::Windows::Forms::Label());
			this->lb6 = (gcnew System::Windows::Forms::Label());
			this->lb5 = (gcnew System::Windows::Forms::Label());
			this->lb1 = (gcnew System::Windows::Forms::Label());
			this->lb2 = (gcnew System::Windows::Forms::Label());
			this->lb3 = (gcnew System::Windows::Forms::Label());
			this->lb4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(560, 767);
			this->splitter1->TabIndex = 10;
			this->splitter1->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-56, 39);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(560, 484);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// btlogout
			// 
			this->btlogout->Font = (gcnew System::Drawing::Font(L"Sitka Display", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btlogout->Location = System::Drawing::Point(187, 684);
			this->btlogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btlogout->Name = L"btlogout";
			this->btlogout->Size = System::Drawing::Size(116, 46);
			this->btlogout->TabIndex = 16;
			this->btlogout->Text = L"LOG OUT";
			this->btlogout->UseVisualStyleBackColor = true;
			this->btlogout->Click += gcnew System::EventHandler(this, &checkpage::btlogout_Click);
			// 
			// lbwelcome
			// 
			this->lbwelcome->AutoSize = true;
			this->lbwelcome->BackColor = System::Drawing::Color::Transparent;
			this->lbwelcome->Font = (gcnew System::Drawing::Font(L"Sitka Small", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbwelcome->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->lbwelcome->Location = System::Drawing::Point(983, 27);
			this->lbwelcome->Name = L"lbwelcome";
			this->lbwelcome->Size = System::Drawing::Size(354, 42);
			this->lbwelcome->TabIndex = 17;
			this->lbwelcome->Text = L"WELCOME 1MS19EI005";
			// 
			// panel1
			// 
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->cboe);
			this->panel1->Controls->Add(this->cbbmi);
			this->panel1->Controls->Add(this->cbrob);
			this->panel1->Controls->Add(this->cbpc);
			this->panel1->Controls->Add(this->cbipr);
			this->panel1->Controls->Add(this->cbc);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->cbdsp);
			this->panel1->Location = System::Drawing::Point(930, 150);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(523, 544);
			this->panel1->TabIndex = 18;
			// 
			// cboe
			// 
			this->cboe->AutoSize = true;
			this->cboe->BackColor = System::Drawing::Color::Transparent;
			this->cboe->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cboe->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboe->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->cboe->Location = System::Drawing::Point(15, 442);
			this->cboe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cboe->Name = L"cboe";
			this->cboe->Size = System::Drawing::Size(179, 30);
			this->cboe->TabIndex = 6;
			this->cboe->Text = L"OPEN ELECTIVE";
			this->cboe->UseVisualStyleBackColor = false;
			// 
			// cbbmi
			// 
			this->cbbmi->AutoSize = true;
			this->cbbmi->BackColor = System::Drawing::Color::Transparent;
			this->cbbmi->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbbmi->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbbmi->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->cbbmi->Location = System::Drawing::Point(15, 384);
			this->cbbmi->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbbmi->Name = L"cbbmi";
			this->cbbmi->Size = System::Drawing::Size(348, 30);
			this->cbbmi->TabIndex = 6;
			this->cbbmi->Text = L"BIO-MEDICAL INSTRUMENTATION";
			this->cbbmi->UseVisualStyleBackColor = false;
			// 
			// cbrob
			// 
			this->cbrob->AutoSize = true;
			this->cbrob->BackColor = System::Drawing::Color::Transparent;
			this->cbrob->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbrob->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbrob->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->cbrob->Location = System::Drawing::Point(15, 313);
			this->cbrob->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbrob->Name = L"cbrob";
			this->cbrob->Size = System::Drawing::Size(126, 30);
			this->cbrob->TabIndex = 5;
			this->cbrob->Text = L"ROBOTICS";
			this->cbrob->UseVisualStyleBackColor = false;
			// 
			// cbpc
			// 
			this->cbpc->AutoSize = true;
			this->cbpc->BackColor = System::Drawing::Color::Transparent;
			this->cbpc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbpc->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbpc->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->cbpc->Location = System::Drawing::Point(15, 246);
			this->cbpc->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbpc->Name = L"cbpc";
			this->cbpc->Size = System::Drawing::Size(212, 30);
			this->cbpc->TabIndex = 4;
			this->cbpc->Text = L"PROCESS CONTROL";
			this->cbpc->UseVisualStyleBackColor = false;
			// 
			// cbipr
			// 
			this->cbipr->AutoSize = true;
			this->cbipr->BackColor = System::Drawing::Color::Transparent;
			this->cbipr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbipr->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbipr->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->cbipr->Location = System::Drawing::Point(16, 174);
			this->cbipr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbipr->Name = L"cbipr";
			this->cbipr->Size = System::Drawing::Size(352, 30);
			this->cbipr->TabIndex = 3;
			this->cbipr->Text = L"INTELLECTUAL PROPERTY RIGHTS";
			this->cbipr->UseVisualStyleBackColor = false;
			// 
			// cbc
			// 
			this->cbc->AutoSize = true;
			this->cbc->BackColor = System::Drawing::Color::Transparent;
			this->cbc->Cursor = System::Windows::Forms::Cursors::Default;
			this->cbc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbc->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbc->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->cbc->Location = System::Drawing::Point(16, 106);
			this->cbc->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbc->Name = L"cbc";
			this->cbc->Size = System::Drawing::Size(173, 30);
			this->cbc->TabIndex = 2;
			this->cbc->Text = L"OOP WITH C++";
			this->cbc->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::RosyBrown;
			this->label6->Location = System::Drawing::Point(138, 498);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(190, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"NOTE : SELECT 6 SUBJECTS";
			// 
			// cbdsp
			// 
			this->cbdsp->AutoSize = true;
			this->cbdsp->BackColor = System::Drawing::Color::Transparent;
			this->cbdsp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbdsp->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbdsp->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->cbdsp->Location = System::Drawing::Point(16, 44);
			this->cbdsp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbdsp->Name = L"cbdsp";
			this->cbdsp->Size = System::Drawing::Size(306, 30);
			this->cbdsp->TabIndex = 0;
			this->cbdsp->Text = L"DIGITAL SIGNAL PROCESSING";
			this->cbdsp->UseVisualStyleBackColor = false;
			// 
			// btsubmit
			// 
			this->btsubmit->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btsubmit->Font = (gcnew System::Drawing::Font(L"Sitka Display", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btsubmit->Location = System::Drawing::Point(1311, 709);
			this->btsubmit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btsubmit->Name = L"btsubmit";
			this->btsubmit->Size = System::Drawing::Size(93, 47);
			this->btsubmit->TabIndex = 19;
			this->btsubmit->Text = L"SUBMIT";
			this->btsubmit->UseVisualStyleBackColor = false;
			this->btsubmit->Click += gcnew System::EventHandler(this, &checkpage::btsubmit_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 547);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(501, 32);
			this->label7->TabIndex = 20;
			this->label7->Text = L"RMT INSTITUTE OF TECHNOLOGY";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(128, 596);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(376, 23);
			this->label5->TabIndex = 21;
			this->label5->Text = L"(AFFILIATED TO VTU)";
			// 
			// btedit
			// 
			this->btedit->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btedit->Enabled = false;
			this->btedit->Font = (gcnew System::Drawing::Font(L"Sitka Display", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btedit->Location = System::Drawing::Point(990, 709);
			this->btedit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btedit->Name = L"btedit";
			this->btedit->Size = System::Drawing::Size(93, 47);
			this->btedit->TabIndex = 19;
			this->btedit->Text = L"EDIT";
			this->btedit->UseVisualStyleBackColor = false;
			this->btedit->Visible = false;
			this->btedit->Click += gcnew System::EventHandler(this, &checkpage::btedit_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->lbcl2);
			this->panel2->Controls->Add(this->lbcl3);
			this->panel2->Controls->Add(this->lbcl4);
			this->panel2->Controls->Add(this->lbcl5);
			this->panel2->Controls->Add(this->lbcl6);
			this->panel2->Controls->Add(this->lbcl1);
			this->panel2->Controls->Add(this->lb6);
			this->panel2->Controls->Add(this->lb5);
			this->panel2->Controls->Add(this->lb1);
			this->panel2->Controls->Add(this->lb2);
			this->panel2->Controls->Add(this->lb3);
			this->panel2->Controls->Add(this->lb4);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Location = System::Drawing::Point(927, 150);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(523, 544);
			this->panel2->TabIndex = 22;
			this->panel2->Visible = false;
		
			// 
			// lbcl2
			// 
			this->lbcl2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbcl2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbcl2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8));
			this->lbcl2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbcl2->Location = System::Drawing::Point(478, 167);
			this->lbcl2->Name = L"lbcl2";
			this->lbcl2->Size = System::Drawing::Size(25, 25);
			this->lbcl2->TabIndex = 32;
			this->lbcl2->Text = L" X";
			this->lbcl2->Visible = false;
			this->lbcl2->Click += gcnew System::EventHandler(this, &checkpage::lbcl2_Click);
			// 
			// lbcl3
			// 
			this->lbcl3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbcl3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbcl3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8));
			this->lbcl3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbcl3->Location = System::Drawing::Point(478, 238);
			this->lbcl3->Name = L"lbcl3";
			this->lbcl3->Size = System::Drawing::Size(25, 25);
			this->lbcl3->TabIndex = 31;
			this->lbcl3->Text = L" X";
			this->lbcl3->Visible = false;
			this->lbcl3->Click += gcnew System::EventHandler(this, &checkpage::lbcl3_Click);
			// 
			// lbcl4
			// 
			this->lbcl4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbcl4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbcl4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8));
			this->lbcl4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbcl4->Location = System::Drawing::Point(478, 308);
			this->lbcl4->Name = L"lbcl4";
			this->lbcl4->Size = System::Drawing::Size(25, 25);
			this->lbcl4->TabIndex = 30;
			this->lbcl4->Text = L" X";
			this->lbcl4->Visible = false;
			this->lbcl4->Click += gcnew System::EventHandler(this, &checkpage::lbcl4_Click);
			// 
			// lbcl5
			// 
			this->lbcl5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbcl5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbcl5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8));
			this->lbcl5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbcl5->Location = System::Drawing::Point(478, 376);
			this->lbcl5->Name = L"lbcl5";
			this->lbcl5->Size = System::Drawing::Size(25, 25);
			this->lbcl5->TabIndex = 29;
			this->lbcl5->Text = L" X";
			this->lbcl5->Visible = false;
			this->lbcl5->Click += gcnew System::EventHandler(this, &checkpage::lbcl5_Click);
			// 
			// lbcl6
			// 
			this->lbcl6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbcl6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbcl6->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8));
			this->lbcl6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbcl6->Location = System::Drawing::Point(478, 444);
			this->lbcl6->Name = L"lbcl6";
			this->lbcl6->Size = System::Drawing::Size(25, 25);
			this->lbcl6->TabIndex = 28;
			this->lbcl6->Text = L" X";
			this->lbcl6->Visible = false;
			this->lbcl6->Click += gcnew System::EventHandler(this, &checkpage::lbcl6_Click);
			// 
			// lbcl1
			// 
			this->lbcl1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbcl1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbcl1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 8));
			this->lbcl1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbcl1->Location = System::Drawing::Point(478, 85);
			this->lbcl1->Name = L"lbcl1";
			this->lbcl1->Size = System::Drawing::Size(25, 25);
			this->lbcl1->TabIndex = 23;
			this->lbcl1->Text = L" X";
			this->lbcl1->Visible = false;
			this->lbcl1->Click += gcnew System::EventHandler(this, &checkpage::label8_Click);
			// 
			// lb6
			// 
			this->lb6->BackColor = System::Drawing::Color::Transparent;
			this->lb6->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F));
			this->lb6->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->lb6->Location = System::Drawing::Point(13, 442);
			this->lb6->Name = L"lb6";
			this->lb6->Size = System::Drawing::Size(306, 30);
			this->lb6->TabIndex = 26;
			this->lb6->Text = L"OPEN ELECTIVE";
			// 
			// lb5
			// 
			this->lb5->BackColor = System::Drawing::Color::Transparent;
			this->lb5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F));
			this->lb5->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->lb5->Location = System::Drawing::Point(13, 371);
			this->lb5->Name = L"lb5";
			this->lb5->Size = System::Drawing::Size(464, 30);
			this->lb5->TabIndex = 27;
			this->lb5->Text = L"BIO-MEDICAL INSTRUMENTATION";
			// 
			// lb1
			// 
			this->lb1->BackColor = System::Drawing::Color::Transparent;
			this->lb1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F));
			this->lb1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->lb1->Location = System::Drawing::Point(13, 85);
			this->lb1->Name = L"lb1";
			this->lb1->Size = System::Drawing::Size(439, 30);
			this->lb1->TabIndex = 23;
			this->lb1->Text = L"DIGITAL SIGNAL PROCESSING";
			this->lb1->Click += gcnew System::EventHandler(this, &checkpage::label1_Click);
			// 
			// lb2
			// 
			this->lb2->BackColor = System::Drawing::Color::Transparent;
			this->lb2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F));
			this->lb2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->lb2->Location = System::Drawing::Point(19, 162);
			this->lb2->Name = L"lb2";
			this->lb2->Size = System::Drawing::Size(306, 30);
			this->lb2->TabIndex = 23;
			this->lb2->Text = L"OOP WITH C++";
			this->lb2->Click += gcnew System::EventHandler(this, &checkpage::label1_Click);
			// 
			// lb3
			// 
			this->lb3->BackColor = System::Drawing::Color::Transparent;
			this->lb3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F));
			this->lb3->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->lb3->Location = System::Drawing::Point(14, 233);
			this->lb3->Name = L"lb3";
			this->lb3->Size = System::Drawing::Size(420, 30);
			this->lb3->TabIndex = 23;
			this->lb3->Text = L"INTELLECTUAL PROPERTY RIGHTS";
			this->lb3->Click += gcnew System::EventHandler(this, &checkpage::label1_Click);
			// 
			// lb4
			// 
			this->lb4->BackColor = System::Drawing::Color::Transparent;
			this->lb4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 10.8F));
			this->lb4->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->lb4->Location = System::Drawing::Point(14, 303);
			this->lb4->Name = L"lb4";
			this->lb4->Size = System::Drawing::Size(306, 30);
			this->lb4->TabIndex = 24;
			this->lb4->Text = L"PROCESS CONTROL";
			// 
			// checkpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1488, 767);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btedit);
			this->Controls->Add(this->btsubmit);
			this->Controls->Add(this->lbwelcome);
			this->Controls->Add(this->btlogout);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"checkpage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CHECKPAGE";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void datread(std::string u)
		{
			int count;
			std::fstream rd;
			rd.open("data.csv", std::ios::in | std::ios::out);
			std::string l, w;
			std::vector<std::string> vec;

			while (!(rd.eof()))
			{
				vec.clear();
				count = 0;
				getline(rd, w);
				if (w == "")
					break;
				std::stringstream q(w);
				while (getline(q, l, ','))
				{
					vec.push_back(l);
					count++;
				}
				count -= 3;
				if (u == vec[0])
				{
					String^ a = gcnew String(vec[3].c_str());
					lb1->Text = a;
					a = gcnew String(vec[4].c_str());
					lb2->Text = a;
					a = gcnew String(vec[5].c_str());
					lb3->Text = a;
					a = gcnew String(vec[6].c_str());
					lb4->Text = a;
					if (count == 5)
					{
						a = gcnew String(vec[7].c_str());
						lb5->Text = a;
						lb6->Text = "";
					}
					else if (count > 5)
					{
						a = gcnew String(vec[7].c_str());
						lb5->Text = a;
						a = gcnew String(vec[8].c_str());
						lb6->Text = a;
					}
					else
					{
						lb5->Text = "";
						lb6->Text = "";


					}
				}
               



			}


	 }

		void writdat()
		{
			std::fstream f, fin;
			f.open("data.csv", std::ios::in | std::ios::app);
			fin.open("data1.csv", std::ios::out | std::ios::app);
			std::string l, w;
			std::vector<std::string> r;

			String^ usn = user;


			std::string sub1_s = msclr::interop::marshal_as<std::string>(lb1->Text);
			std::string sub2_s = msclr::interop::marshal_as<std::string>(lb2->Text);
			std::string sub3_s = msclr::interop::marshal_as<std::string>(lb3->Text);
			std::string sub4_s = msclr::interop::marshal_as<std::string>(lb4->Text);
			std::string sub5_s = msclr::interop::marshal_as<std::string>(lb5->Text);
			std::string sub6_s = msclr::interop::marshal_as<std::string>(lb6->Text);
			std::string usn_s = msclr::interop::marshal_as<std::string>(usn);



			while (!(f.eof()))
			{
				r.clear();
				getline(f, l);
				if (l == "")
					break;
				std::stringstream s(l);
				while (getline(s, w, ','))
					r.push_back(w);

				if (r[0] == usn_s)
				{
					fin << r[0] << ",";
					fin << r[1] << ",";
					fin << r[2];
					if (sub1_s != "")
						fin <<","<< sub1_s;
					if (sub2_s != "")
						fin <<","<< sub2_s;
					if (sub3_s != "")
						fin << ","<<sub3_s;
					if (sub4_s != "")
						fin << ","<<sub4_s;
					if (sub5_s != "")
						fin <<","<< sub5_s;
					if (sub6_s!= "")
						fin <<","<< sub6_s;
					fin << "\n";
				   }
				else
				{
					fin << l << "\n";
				}


			}
			f.close();
			fin.close();
			remove("data.csv");
			rename("data1.csv", "data.csv");
			

	}

	private: System::Void btsubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		int count;
		if (pane == 1)
		{
			count = 0;
			String^ sub1;
			String^ sub2;
			String^ sub3;
			String^ sub4;
			String^ sub5;
			String^ sub6;

			if (cbdsp->Checked == true)
			{
				if (count == 0)
					sub1 = cbdsp->Text;
				if (count == 1)
					sub2 = cbdsp->Text;
				if (count == 2)
					sub3 = cbdsp->Text;
				if (count == 3)												//dsp
					sub4 = cbdsp->Text;
				if (count == 4)
					sub5 = cbdsp->Text;
				if (count == 5)
					sub6 = cbdsp->Text;
				count++;
			}

			if (cbc->Checked == true)
			{
				if (count == 0)
					sub1 = cbc->Text;
				if (count == 1)
					sub2 = cbc->Text;
				if (count == 2)
					sub3 = cbc->Text;									//oop with c++
				if (count == 3)
					sub4 = cbc->Text;
				if (count == 4)
					sub5 = cbc->Text;
				if (count == 5)
					sub6 = cbc->Text;
				count++;
			}

			if (cbipr->Checked == true)
			{
				if (count == 0)
					sub1 = cbipr->Text;
				if (count == 1)
					sub2 = cbipr->Text;									//ipr
				if (count == 2)
					sub3 = cbipr->Text;
				if (count == 3)
					sub4 = cbipr->Text;
				if (count == 4)
					sub5 = cbipr->Text;
				if (count == 5)
					sub6 = cbipr->Text;
				count++;
			}

			if (cbpc->Checked == true)
			{
				if (count == 0)
					sub1 = cbpc->Text;
				if (count == 1)
					sub2 = cbpc->Text;
				if (count == 2)
					sub3 = cbpc->Text;										//pc
				if (count == 3)
					sub4 = cbpc->Text;
				if (count == 4)
					sub5 = cbpc->Text;
				if (count == 5)
					sub6 = cbpc->Text;
				count++;
			}

			if (cbrob->Checked == true)
			{
				if (count == 0)
					sub1 = cbrob->Text;
				if (count == 1)
					sub2 = cbrob->Text;
				if (count == 2)											//robotics
					sub3 = cbrob->Text;
				if (count == 3)
					sub4 = cbrob->Text;
				if (count == 4)
					sub5 = cbrob->Text;
				if (count == 5)
					sub6 = cbrob->Text;
				count++;
			}
			if (cbbmi->Checked == true)
			{
				if (count == 0)
					sub1 = cbbmi->Text;
				if (count == 1)
					sub2 = cbbmi->Text;
				if (count == 2)										//bmi
					sub3 = cbbmi->Text;
				if (count == 3)
					sub4 = cbbmi->Text;
				if (count == 4)
					sub5 = cbbmi->Text;
				if (count == 5)
					sub6 = cbbmi->Text;
				count++;
			}

			if (cboe->Checked == true)
			{
				if (count == 0)
					sub1 = cboe->Text;
				if (count == 1)
					sub2 = cboe->Text;
				if (count == 2)												//oe
					sub3 = cboe->Text;
				if (count == 3)
					sub4 = cboe->Text;
				if (count == 4)
					sub5 = cboe->Text;
				if (count == 5)
					sub6 = cboe->Text;
				count++;
			}
			if (cbbmi->Checked == true && cbrob->Checked == true)
			{
				MessageBox::Show("Select only one dept elective!", "Selection Invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else
			{
				if (count == 6)
				{
					///////////////////////

					std::fstream fin;
					std::fstream f;
					// std::fstream u;
					 // Open an existing file
					fin.open("data.csv", std::ios::in | std::ios::app);
					//	u.open("username.csv", std::ios::out | std::ios::app);                  //login   code
					f.open("data1.csv", std::ios::out | std::ios::app);

					// Get the roll number
					// of which the data is required
					String^ usn = user;


					std::string sub1_s = msclr::interop::marshal_as<std::string>(sub1);
					std::string sub2_s = msclr::interop::marshal_as<std::string>(sub2);
					std::string sub3_s = msclr::interop::marshal_as<std::string>(sub3);
					std::string sub4_s = msclr::interop::marshal_as<std::string>(sub4);
					std::string sub5_s = msclr::interop::marshal_as<std::string>(sub5);
					std::string sub6_s = msclr::interop::marshal_as<std::string>(sub6);
					std::string usn_s = msclr::interop::marshal_as<std::string>(usn);



					// Read the Data from the file
					// as String Vector
					std::vector<std::string> row;
					std::string line, word, temp;

					while (!fin.eof())
					{



						// read an entire row and
						// store it in a string variable 'line'
						getline(fin, line);




						// used for breaking words
						std::stringstream s(line);

						// read every column data of a row and
						// store it in a string variable, 'word'
						while (getline(s, word, ',')) {

							// add all the column data
							// of a row to a vector
							row.push_back(word);
						}

						// convert string to integer for comparision

						if (line == "")
						{
							break;
						}
						// Compare the roll number
						if (usn_s != row[0]) {

							f << line << "\n";
						}
						else {
							f << row[0] << ",";
							f << row[1] << ",";
							f << "1" << ",";                   						//WRITING INTO DATABASE
							f << sub1_s << ",";
							f << sub2_s << ",";
							f << sub3_s << ",";
							f << sub4_s << ",";
							f << sub5_s << ",";
							f << sub6_s;
							f << "\n";
						}
						row.clear();
					}



					///////////////


					fin.close();
					f.close();
					remove("data.csv");
					rename("data1.csv", "data.csv");

					MessageBox::Show("Registration of courses successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					if (MessageBox::Show("Do you want to proceed to print page?", "Courses", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						

						///////////////////////
						Print^ hall = gcnew Print(user);
						this->Hide();
						hall->ShowDialog();
						int y = hall->swap();
						if (y == 1)
						{                                                   //FOR SWAPPPING PAGES
							hall->setswap();
							this->Close();
						}
						else
							this->Show();
					}


					else
						btlogout->PerformClick();
				}
				else
					MessageBox::Show("6 subjects(21 credits) is mandatory while registering", "Selection Invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

			}
		}

		//////////////PAnel2////
		if (pane == 2)
		{
			if (btsubmit->Text == "DONE")
			{
				count = 0;
				if (lb1->Text != "")
					count++;
				if (lb2->Text != "")
					count++;
				if (lb3->Text != "")
					count++;
				if (lb4->Text != "")
					count++;
				if (lb5->Text != "")
					count++;
				if (lb6->Text != "")
					count++;

				if (count < 4)
				{
					MessageBox::Show("select minimum 4 Subjects", "Caution", MessageBoxButtons::OK, MessageBoxIcon::Error);
					String^ u = user;
					std::string usn_s = msclr::interop::marshal_as<std::string>(u);
					datread(usn_s);
					lbcl1->Visible = true;
					lbcl2->Visible = true;
					lbcl3->Visible = true;
					lbcl4->Visible = true;
					lbcl5->Visible = true;
					lbcl6->Visible = true;
				}
				else
				{
			
				writdat();
				String^ u = user;
				std::string usn_s = msclr::interop::marshal_as<std::string>(u);
				datread(usn_s);
				btedit->Text = "EDIT";
				lbcl1->Visible = false;
				lbcl2->Visible = false;
				lbcl3->Visible = false;
				lbcl4->Visible = false;
				lbcl5->Visible = false;
				lbcl6->Visible = false;
				btsubmit->Text = "SUBMIT";
			}
			}
			else
			{
				
				Print^ hall = gcnew Print(user);
				this->Hide();
				hall->ShowDialog();
				int y = hall->swap();
				if (y == 1)
				{                                                   //FOR SWAPPPING PAGES
					hall->setswap();
					this->Close();
				}
				else
					this->Show();
			}







		}







           ////////////////////////////////////////////
}

	private: System::Void btlogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		lb1->Text = "";
		lbcl1->Visible = false;
		
	}
	private: System::Void btedit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ usn = user;
		std::string usn_s = msclr::interop::marshal_as<std::string>(usn);
		if (btedit->Text == "EDIT")
		{
			MessageBox::Show("SUBJECTS CAN BE DESELECTED ONLY ONCE AND IT CANNOT BE RECOVERD. PROCEED WITH CAUTION. ", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			lbcl1->Visible = true;

			lbcl2->Visible = true;

			lbcl3->Visible = true;

			lbcl4->Visible = true;

			if (lb5->Text != "")
				lbcl5->Visible = true;

			if (lb6->Text != "")
			      lbcl6->Visible = true;
			btedit->Text = "RESET";
			btsubmit->Text = "DONE";
		}
		else
		{ 
			datread(usn_s);
			lbcl1->Visible = true;

			lbcl2->Visible = true;

			lbcl3->Visible = true;

			lbcl4->Visible = true;

			if (lb5->Text != "")
				lbcl5->Visible = true;

			if (lb6->Text != "")
				lbcl6->Visible = true;
		

		}
	}
	
private: System::Void lbcl2_Click(System::Object^ sender, System::EventArgs^ e) {
	lb2->Text = "";
	lbcl2->Visible = false;
}

private: System::Void lbcl3_Click(System::Object^ sender, System::EventArgs^ e) {
	lb3->Text = "";
	lbcl3->Visible = false;
}
private: System::Void lbcl4_Click(System::Object^ sender, System::EventArgs^ e) {
	lb4->Text = "";
	lbcl4->Visible = false;
}
private: System::Void lbcl5_Click(System::Object^ sender, System::EventArgs^ e) {
	lb5->Text = "";
	lbcl5->Visible = false;
}
private: System::Void lbcl6_Click(System::Object^ sender, System::EventArgs^ e) {

	lb6->Text = "";
	lbcl6->Visible = false;
}
};
	
}