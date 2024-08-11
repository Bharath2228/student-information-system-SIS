#pragma once
#include<fstream>
#include<iostream>
#include<string.h>
#include<vector>
#include<istream>
#include<string>
#include<sstream>
#include<msclr\marshal_cppstd.h>
#include <iomanip>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Print
	/// </summary>
	public ref class Print : public System::Windows::Forms::Form
	{
	public:
	public: String^ s;
	public: void cred(String ^ ex, int c)
	{
		if (ex == "DIGITAL SIGNAL PROCESSING")					// FOR CREDITS
		{
			if (c == 1)
				tb_cred1->Text = "3:1:0";
			if (c == 2)
				tb_cred2->Text = "3:1:0";
			if (c == 3)
				tb_cred3->Text = "3:1:0";
			if (c == 4)
				tb_cred4->Text = "3:1:0";
			if (c == 5)
				tb_cred5->Text = "3:1:0";
			if (c == 6)
				tb_cred6->Text = "3:1:0";
		}
		if (ex == "OOP WITH C++")
		{
			if (c == 1)
				tb_cred1->Text = "3:0:1";
			if (c == 2)
				tb_cred2->Text = "3:0:1";
			if (c == 3)
				tb_cred3->Text = "3:0:1";
			if (c == 4)
				tb_cred4->Text = "3:0:1";
			if (c == 5)
				tb_cred5->Text = "3:0:0";
			if (c == 6)
				tb_cred6->Text = "3:0:0";

		}

		if (ex == "INTELLECTUAL PROPERTY RIGHTS")
		{
			if (c == 1)
				tb_cred1->Text = "3:0:0";
			if (c == 2)
				tb_cred2->Text = "3:0:0";
			if (c == 3)
				tb_cred3->Text = "3:0:0";
			if (c == 4)
				tb_cred4->Text = "3:0:0";
			if (c == 5)
				tb_cred5->Text = "3:0:0";
			if (c == 6)
				tb_cred6->Text = "3:0:0";
		}

		if (ex == "PROCESS CONTROL")
		{
			if (c == 1)
				tb_cred1->Text = "3:1:0";
			if (c == 2)
				tb_cred2->Text = "3:1:0";
			if (c == 3)
				tb_cred3->Text = "3:1:0";
			if (c == 4)
				tb_cred4->Text = "3:1:0";
			if (c == 5)
				tb_cred5->Text = "3:1:0";
			if (c == 6)
				tb_cred6->Text = "3:1:0";
		}

		if (ex == "ROBOTICS" || ex == "BIO-MEDICAL INSTRUMENTATION")
		{
			if (c == 1)
				tb_cred1->Text = "3:0:0";
			if (c == 2)
				tb_cred2->Text = "3:0:0";
			if (c == 3)
				tb_cred3->Text = "3:0:0";
			if (c == 4)
				tb_cred4->Text = "3:0:0";
			if (c == 5)
				tb_cred5->Text = "3:0:0";
			if (c == 6)
				tb_cred6->Text = "3:0:0";
		}

		if (ex == "OPEN ELECTIVE")
		{
			if (c == 1)
				tb_cred1->Text = "3:0:0";
			if (c == 2)
				tb_cred2->Text = "3:0:0";
			if (c == 3)
				tb_cred3->Text = "3:0:0";
			if (c == 4)
				tb_cred4->Text = "3:0:0";
			if (c == 5)
				tb_cred5->Text = "3:0:0";
			if (c == 6)
				tb_cred6->Text = "3:0:0";
		}

	} 
		Print(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Print(String ^ txt)
		{  
			InitializeComponent();
			tbusn->Text = txt;
			std::fstream f;
			f.open("data.csv", std::ios::in);
			String^ usn = txt;
			std::string line, word, temp;
			std::vector<std::string> row;

			std::string usn_s = msclr::interop::marshal_as<std::string>(usn);
		
			
			int cnt;

			while (!(f.eof()))
			{
				cnt = 0;
				row.clear();
				getline(f, line);
				if (line == "")
					break;
				std::stringstream s(line);

				while (getline(s, word, ','))
				{
					row.push_back(word);
					++cnt;
				}
				cnt -= 3;
				if (usn_s == row[0])
				{
					
					String^ USN = gcnew String(row[0].c_str());
					tbusn->Text = USN;
					String^ name = gcnew String(row[1].c_str());
					tbname->Text = name;
					String^ data = gcnew String(row[3].c_str());                // READING SUBJECTS FROM DATABASE
					tb_sub1->Text = data;
					cred(data, 1);
					String^ data1 = gcnew String(row[4].c_str());
					tb_sub2->Text = data1;
					cred(data1, 2);
					String^ data2 = gcnew String(row[5].c_str());
					tb_sub3->Text = data2;
					cred(data2, 3);
					String^ data3 = gcnew String(row[6].c_str());
					tb_sub4->Text = data3;
					cred(data3, 4);
					
					if (cnt == 5)
					{
						String^ data4 = gcnew String(row[7].c_str());
						tb_sub5->Text = data4;
						cred(data4, 5);
						
					}
					if (cnt > 5)
					{
						String^ data4 = gcnew String(row[7].c_str());
						tb_sub5->Text = data4;
						cred(data4, 5);
						String^ data5 = gcnew String(row[8].c_str());
						tb_sub6->Text = data5;
						cred(data5, 6);
						

					}
					
					break;
					

					/////
				}
			} 
			//
			//TODO: Add the constructor code here
			//
		
		}

	public:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ tb_sub4;
	private: System::Windows::Forms::TextBox^ tb_sub3;
	private: System::Windows::Forms::TextBox^ tb_sub2;
	private: System::Windows::Forms::TextBox^ tb_sub1;

	private: System::Windows::Forms::TextBox^ tb_cred4;
	private: System::Windows::Forms::TextBox^ tb_cred3;
	private: System::Windows::Forms::TextBox^ tb_cred2;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TextBox^ tb_cred1;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ tbusn;
private: System::Windows::Forms::Label^ lbname;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ photo;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ tbname;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ tb_sub6;

private: System::Windows::Forms::TextBox^ tb_sub5;

private: System::Windows::Forms::TextBox^ tb_cred6;

private: System::Windows::Forms::TextBox^ tb_cred5;

private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox1;

	public:












	public:




	public: int cl = 1;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Print()
		{
			if (components)
			{
				delete components;
			}
		}
	

	

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Print::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tb_sub6 = (gcnew System::Windows::Forms::TextBox());
			this->tb_sub5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_sub4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_sub3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_sub2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_sub1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_cred6 = (gcnew System::Windows::Forms::TextBox());
			this->tb_cred5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_cred4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->tb_cred3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_cred2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_cred1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->tbusn = (gcnew System::Windows::Forms::TextBox());
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->photo = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->photo->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Font = (gcnew System::Drawing::Font(L"Sitka Display", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1345, 143);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 57);
			this->button2->TabIndex = 6;
			this->button2->Text = L"BACK";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Print::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Sitka Display", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1345, 277);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 57);
			this->button1->TabIndex = 7;
			this->button1->Text = L"PRINT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Print::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Font = (gcnew System::Drawing::Font(L"Sitka Display", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1345, 427);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 64);
			this->button3->TabIndex = 8;
			this->button3->Text = L"LOGOUT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Print::button3_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Print::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->tb_sub6);
			this->panel1->Controls->Add(this->tb_sub5);
			this->panel1->Controls->Add(this->tb_sub4);
			this->panel1->Controls->Add(this->tb_sub3);
			this->panel1->Controls->Add(this->tb_sub2);
			this->panel1->Controls->Add(this->tb_sub1);
			this->panel1->Controls->Add(this->tb_cred6);
			this->panel1->Controls->Add(this->tb_cred5);
			this->panel1->Controls->Add(this->tb_cred4);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->tb_cred3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->tb_cred2);
			this->panel1->Controls->Add(this->textBox19);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->tb_cred1);
			this->panel1->Controls->Add(this->textBox16);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->tbname);
			this->panel1->Controls->Add(this->tbusn);
			this->panel1->Controls->Add(this->lbname);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->photo);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(73, 44);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(825, 647);
			this->panel1->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(521, 597);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(268, 50);
			this->label14->TabIndex = 11;
			this->label14->Text = L"HOD SIGNATURE";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(19, 597);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(268, 50);
			this->label13->TabIndex = 11;
			this->label13->Text = L"STUDENT SIGNATURE";
			// 
			// tb_sub6
			// 
			this->tb_sub6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_sub6->Location = System::Drawing::Point(252, 526);
			this->tb_sub6->Name = L"tb_sub6";
			this->tb_sub6->ReadOnly = true;
			this->tb_sub6->Size = System::Drawing::Size(337, 28);
			this->tb_sub6->TabIndex = 10;
			this->tb_sub6->Text = L"NIL";
			// 
			// tb_sub5
			// 
			this->tb_sub5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_sub5->Location = System::Drawing::Point(252, 502);
			this->tb_sub5->Name = L"tb_sub5";
			this->tb_sub5->ReadOnly = true;
			this->tb_sub5->Size = System::Drawing::Size(337, 28);
			this->tb_sub5->TabIndex = 10;
			this->tb_sub5->Text = L"NIL";
			// 
			// tb_sub4
			// 
			this->tb_sub4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_sub4->Location = System::Drawing::Point(252, 477);
			this->tb_sub4->Name = L"tb_sub4";
			this->tb_sub4->ReadOnly = true;
			this->tb_sub4->Size = System::Drawing::Size(337, 28);
			this->tb_sub4->TabIndex = 10;
			this->tb_sub4->Text = L"NIL";
			// 
			// tb_sub3
			// 
			this->tb_sub3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_sub3->Location = System::Drawing::Point(252, 453);
			this->tb_sub3->Name = L"tb_sub3";
			this->tb_sub3->ReadOnly = true;
			this->tb_sub3->Size = System::Drawing::Size(337, 28);
			this->tb_sub3->TabIndex = 10;
			this->tb_sub3->Text = L"NIL";
			// 
			// tb_sub2
			// 
			this->tb_sub2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_sub2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_sub2->Location = System::Drawing::Point(252, 428);
			this->tb_sub2->Name = L"tb_sub2";
			this->tb_sub2->ReadOnly = true;
			this->tb_sub2->Size = System::Drawing::Size(337, 28);
			this->tb_sub2->TabIndex = 10;
			this->tb_sub2->Text = L"NIL";
			// 
			// tb_sub1
			// 
			this->tb_sub1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_sub1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.7F));
			this->tb_sub1->Location = System::Drawing::Point(252, 403);
			this->tb_sub1->Name = L"tb_sub1";
			this->tb_sub1->ReadOnly = true;
			this->tb_sub1->Size = System::Drawing::Size(337, 28);
			this->tb_sub1->TabIndex = 10;
			this->tb_sub1->Text = L"NIL";
			// 
			// tb_cred6
			// 
			this->tb_cred6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_cred6->Location = System::Drawing::Point(103, 526);
			this->tb_cred6->Name = L"tb_cred6";
			this->tb_cred6->ReadOnly = true;
			this->tb_cred6->Size = System::Drawing::Size(152, 28);
			this->tb_cred6->TabIndex = 10;
			this->tb_cred6->Text = L"NIL";
			// 
			// tb_cred5
			// 
			this->tb_cred5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_cred5->Location = System::Drawing::Point(103, 502);
			this->tb_cred5->Name = L"tb_cred5";
			this->tb_cred5->ReadOnly = true;
			this->tb_cred5->Size = System::Drawing::Size(152, 28);
			this->tb_cred5->TabIndex = 10;
			this->tb_cred5->Text = L"NIL";
			// 
			// tb_cred4
			// 
			this->tb_cred4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_cred4->Location = System::Drawing::Point(103, 477);
			this->tb_cred4->Name = L"tb_cred4";
			this->tb_cred4->ReadOnly = true;
			this->tb_cred4->Size = System::Drawing::Size(152, 28);
			this->tb_cred4->TabIndex = 10;
			this->tb_cred4->Text = L"NIL";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(584, 526);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(190, 28);
			this->textBox9->TabIndex = 10;
			// 
			// tb_cred3
			// 
			this->tb_cred3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_cred3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_cred3->Location = System::Drawing::Point(103, 453);
			this->tb_cred3->Name = L"tb_cred3";
			this->tb_cred3->ReadOnly = true;
			this->tb_cred3->Size = System::Drawing::Size(152, 28);
			this->tb_cred3->TabIndex = 10;
			this->tb_cred3->Text = L"NIL";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(584, 502);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(190, 28);
			this->textBox3->TabIndex = 10;
			// 
			// tb_cred2
			// 
			this->tb_cred2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_cred2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_cred2->Location = System::Drawing::Point(103, 429);
			this->tb_cred2->Name = L"tb_cred2";
			this->tb_cred2->ReadOnly = true;
			this->tb_cred2->Size = System::Drawing::Size(152, 28);
			this->tb_cred2->TabIndex = 10;
			this->tb_cred2->Text = L"3:0:1";
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(584, 477);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(190, 28);
			this->textBox19->TabIndex = 10;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(584, 453);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(190, 28);
			this->textBox15->TabIndex = 10;
			// 
			// textBox11
			// 
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(584, 428);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(190, 28);
			this->textBox11->TabIndex = 10;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(24, 526);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(79, 28);
			this->textBox8->TabIndex = 10;
			this->textBox8->Text = L"      6";
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(584, 403);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(190, 28);
			this->textBox5->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(24, 502);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(79, 28);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"      5";
			// 
			// tb_cred1
			// 
			this->tb_cred1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_cred1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_cred1->Location = System::Drawing::Point(103, 403);
			this->tb_cred1->Name = L"tb_cred1";
			this->tb_cred1->ReadOnly = true;
			this->tb_cred1->Size = System::Drawing::Size(152, 28);
			this->tb_cred1->TabIndex = 10;
			this->tb_cred1->Text = L"2:0:2";
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(24, 477);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(79, 28);
			this->textBox16->TabIndex = 10;
			this->textBox16->Text = L"      4";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(24, 453);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(79, 28);
			this->textBox12->TabIndex = 10;
			this->textBox12->Text = L"      3";
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(24, 428);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(79, 28);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"      2";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(24, 403);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(79, 28);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"      1";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(618, 364);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 25);
			this->label12->TabIndex = 9;
			this->label12->Text = L"SIGNATURE";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(337, 364);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 25);
			this->label11->TabIndex = 9;
			this->label11->Text = L"SUBJECTS";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(131, 364);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 25);
			this->label10->TabIndex = 9;
			this->label10->Text = L"CREDITS";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(29, 364);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 25);
			this->label9->TabIndex = 9;
			this->label9->Text = L"SL NO";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(562, 22);
			this->label7->TabIndex = 8;
			this->label7->Text = L"DEPT of ELECTRONICS AND INSTRUMENTATION ENGINEERING";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(-73, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(956, 23);
			this->label8->TabIndex = 7;
			this->label8->Text = resources->GetString(L"label8.Text");
			// 
			// tbname
			// 
			this->tbname->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tbname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbname->Location = System::Drawing::Point(507, 312);
			this->tbname->Name = L"tbname";
			this->tbname->ReadOnly = true;
			this->tbname->Size = System::Drawing::Size(148, 21);
			this->tbname->TabIndex = 6;
			this->tbname->Text = L"JOHN";
			// 
			// tbusn
			// 
			this->tbusn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tbusn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbusn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbusn->Location = System::Drawing::Point(103, 312);
			this->tbusn->Name = L"tbusn";
			this->tbusn->ReadOnly = true;
			this->tbusn->Size = System::Drawing::Size(178, 21);
			this->tbusn->TabIndex = 6;
			this->tbusn->Text = L"1MS19EI000";
			// 
			// lbname
			// 
			this->lbname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(654, 234);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(94, 34);
			this->lbname->TabIndex = 4;
			this->lbname->Text = L"SEM: V";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(287, 312);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(214, 23);
			this->label15->TabIndex = 4;
			this->label15->Text = L"CANDIDATE NAME:";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 312);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"USN:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(160, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(292, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ADMISSION TICKET DETAILS";
			// 
			// photo
			// 
			this->photo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->photo->Controls->Add(this->label3);
			this->photo->Location = System::Drawing::Point(622, 16);
			this->photo->Name = L"photo";
			this->photo->Size = System::Drawing::Size(179, 170);
			this->photo->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(35, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 26);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Paste A Photo Here";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(208, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"(affiliated to VTU)";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(75, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(514, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"RMT INSTITUTE OF TECHNOLOGY";
			// 
			// Print
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1444, 764);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Print";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PRINT PAGE";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Print::Print_FormClosing);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->photo->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
			public: int logout = 0;
	public: int swap()
	{
		return logout;
	}
	public: void setswap()
	{
		logout = 0;
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	cl = 0;
	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	cl = 0;
	logout = 1;                           // LOGGING OUT
	Print::Close();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	System::Drawing::Bitmap^ memoryImage = gcnew System::Drawing::Bitmap(panel1->Width, panel1->Height);
	panel1->DrawToBitmap(memoryImage, panel1->ClientRectangle);
	e->Graphics->DrawImage(memoryImage, 100, 100);                 // PRINTING
}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		printPreviewDialog1->ShowDialog();
	}
private: System::Void Print_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (cl == 1)
	{
		
		if (MessageBox::Show("Are you sure you want to Exit?", "Exit Dialog", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			logout = 1;
		else											// EXITING
			e->Cancel = true;
	}
}

};
}
