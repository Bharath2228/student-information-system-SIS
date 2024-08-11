#pragma once
#include "checkpage.h"
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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Splitter^ splitter1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btsignin;
	private: System::Windows::Forms::Button^ btregist;
	private: System::Windows::Forms::TextBox^ tb_pass;
	private: System::Windows::Forms::TextBox^ tb_user;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btcancel;
	private: System::Windows::Forms::TextBox^ tb_regid;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btreg_regist;
	private: System::Windows::Forms::TextBox^ tb_regpass;
	private: System::Windows::Forms::TextBox^ tb_name;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbsign;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tb_reguser;

	private: System::Windows::Forms::Label^ USN;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btsignin = (gcnew System::Windows::Forms::Button());
			this->btregist = (gcnew System::Windows::Forms::Button());
			this->tb_pass = (gcnew System::Windows::Forms::TextBox());
			this->tb_user = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btcancel = (gcnew System::Windows::Forms::Button());
			this->tb_regid = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btreg_regist = (gcnew System::Windows::Forms::Button());
			this->tb_regpass = (gcnew System::Windows::Forms::TextBox());
			this->tb_reguser = (gcnew System::Windows::Forms::TextBox());
			this->tb_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->USN = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbsign = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->splitter1->Cursor = System::Windows::Forms::Cursors::Default;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(595, 881);
			this->splitter1->TabIndex = 3;
			this->splitter1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::WindowText;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->btsignin);
			this->panel1->Controls->Add(this->btregist);
			this->panel1->Controls->Add(this->tb_pass);
			this->panel1->Controls->Add(this->tb_user);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(876, 386);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(477, 384);
			this->panel1->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(335, 156);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 19);
			this->label9->TabIndex = 15;
			this->label9->Text = L"    SHOW";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// btsignin
			// 
			this->btsignin->Location = System::Drawing::Point(277, 274);
			this->btsignin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btsignin->Name = L"btsignin";
			this->btsignin->Size = System::Drawing::Size(109, 50);
			this->btsignin->TabIndex = 2;
			this->btsignin->Text = L"SIGN IN";
			this->btsignin->UseVisualStyleBackColor = true;
			this->btsignin->Click += gcnew System::EventHandler(this, &MyForm::btsignin_Click);
			// 
			// btregist
			// 
			this->btregist->BackColor = System::Drawing::SystemColors::Menu;
			this->btregist->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btregist->Location = System::Drawing::Point(84, 274);
			this->btregist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btregist->Name = L"btregist";
			this->btregist->Size = System::Drawing::Size(109, 50);
			this->btregist->TabIndex = 2;
			this->btregist->Text = L"REGISTER";
			this->btregist->UseVisualStyleBackColor = false;
			this->btregist->Click += gcnew System::EventHandler(this, &MyForm::btregist_Click);
			// 
			// tb_pass
			// 
			this->tb_pass->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tb_pass->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tb_pass->Location = System::Drawing::Point(179, 153);
			this->tb_pass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_pass->MaxLength = 6;
			this->tb_pass->Name = L"tb_pass";
			this->tb_pass->PasswordChar = '*';
			this->tb_pass->Size = System::Drawing::Size(227, 22);
			this->tb_pass->TabIndex = 1;
			this->tb_pass->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tb_pass_KeyPress);
			// 
			// tb_user
			// 
			this->tb_user->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tb_user->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tb_user->Location = System::Drawing::Point(179, 94);
			this->tb_user->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_user->Name = L"tb_user";
			this->tb_user->Size = System::Drawing::Size(227, 22);
			this->tb_user->TabIndex = 1;
			this->tb_user->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tb_user_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(51, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"PASSWORD";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::InfoText;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(51, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"USN";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::WindowText;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->btcancel);
			this->panel2->Controls->Add(this->tb_regid);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->btreg_regist);
			this->panel2->Controls->Add(this->tb_regpass);
			this->panel2->Controls->Add(this->tb_reguser);
			this->panel2->Controls->Add(this->tb_name);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->USN);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(879, 384);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(477, 384);
			this->panel2->TabIndex = 9;
			this->panel2->Visible = false;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(332, 167);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"     SHOW";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// btcancel
			// 
			this->btcancel->Location = System::Drawing::Point(283, 290);
			this->btcancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btcancel->Name = L"btcancel";
			this->btcancel->Size = System::Drawing::Size(123, 50);
			this->btcancel->TabIndex = 5;
			this->btcancel->Text = L"CANCEL";
			this->btcancel->UseVisualStyleBackColor = true;
			this->btcancel->Click += gcnew System::EventHandler(this, &MyForm::btcancel_Click);
			// 
			// tb_regid
			// 
			this->tb_regid->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tb_regid->Location = System::Drawing::Point(179, 214);
			this->tb_regid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_regid->Name = L"tb_regid";
			this->tb_regid->Size = System::Drawing::Size(227, 22);
			this->tb_regid->TabIndex = 4;
			this->tb_regid->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tb_regid_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(51, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"STUDENT ID";
			// 
			// btreg_regist
			// 
			this->btreg_regist->BackColor = System::Drawing::SystemColors::Menu;
			this->btreg_regist->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btreg_regist->Location = System::Drawing::Point(51, 290);
			this->btreg_regist->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btreg_regist->Name = L"btreg_regist";
			this->btreg_regist->Size = System::Drawing::Size(109, 50);
			this->btreg_regist->TabIndex = 2;
			this->btreg_regist->Text = L"REGISTER";
			this->btreg_regist->UseVisualStyleBackColor = false;
			this->btreg_regist->Click += gcnew System::EventHandler(this, &MyForm::btreg_regist_Click);
			// 
			// tb_regpass
			// 
			this->tb_regpass->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tb_regpass->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tb_regpass->Location = System::Drawing::Point(179, 161);
			this->tb_regpass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_regpass->MaxLength = 6;
			this->tb_regpass->Name = L"tb_regpass";
			this->tb_regpass->PasswordChar = '*';
			this->tb_regpass->Size = System::Drawing::Size(227, 22);
			this->tb_regpass->TabIndex = 1;
			this->tb_regpass->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tb_regpass_KeyPress);
			// 
			// tb_reguser
			// 
			this->tb_reguser->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tb_reguser->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tb_reguser->Location = System::Drawing::Point(179, 57);
			this->tb_reguser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_reguser->Name = L"tb_reguser";
			this->tb_reguser->Size = System::Drawing::Size(227, 22);
			this->tb_reguser->TabIndex = 1;
			this->tb_reguser->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tb_reguser_KeyPress);
			// 
			// tb_name
			// 
			this->tb_name->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tb_name->ForeColor = System::Drawing::SystemColors::Desktop;
			this->tb_name->Location = System::Drawing::Point(179, 111);
			this->tb_name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tb_name->Name = L"tb_name";
			this->tb_name->Size = System::Drawing::Size(227, 22);
			this->tb_name->TabIndex = 1;
			this->tb_name->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tb_name_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(51, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PASSWORD";
			// 
			// USN
			// 
			this->USN->AutoSize = true;
			this->USN->BackColor = System::Drawing::SystemColors::InfoText;
			this->USN->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->USN->Location = System::Drawing::Point(48, 63);
			this->USN->Name = L"USN";
			this->USN->Size = System::Drawing::Size(36, 16);
			this->USN->TabIndex = 0;
			this->USN->Text = L"USN";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::InfoText;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(48, 117);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"NAME";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-68, 89);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(595, 489);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// lbsign
			// 
			this->lbsign->AutoSize = true;
			this->lbsign->BackColor = System::Drawing::Color::Transparent;
			this->lbsign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbsign->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->lbsign->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbsign->Location = System::Drawing::Point(1059, 274);
			this->lbsign->Name = L"lbsign";
			this->lbsign->Size = System::Drawing::Size(174, 46);
			this->lbsign->TabIndex = 11;
			this->lbsign->Text = L"SIGN IN";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(169, 643);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(375, 23);
			this->label5->TabIndex = 13;
			this->label5->Text = L"(AFFILIATED TO VTU)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 598);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(501, 32);
			this->label7->TabIndex = 14;
			this->label7->Text = L"RMT INSTITUTE OF TECHNOLOGY";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1444, 881);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lbsign);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PANE";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btsignin_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string temp1 = "0";                                           //keeping count of registration status 
		
		
		int length = this->tb_pass->Text->Length;
		if (length != 6)
			MessageBox::Show("Password should be of 6 characters","Caution!!",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
		else
		{ //sign in code
			int count = 0;
			std::fstream f;
			std::fstream u;
			u.open("data.csv", std::ios::in);
			
			            
			String^ usn = tb_user->Text->ToUpper();
			String^ pass = tb_pass->Text;
			std::string line, word, line_u, word_u;											
			std::vector<std::string> row;
			std::vector<std::string> row1;
			std::string usn_s = msclr::interop::marshal_as<std::string>(usn);
			std::string pass_s = msclr::interop::marshal_as<std::string>(pass);
			std::string usn_u = usn_s;
			//////////

			while (!(u.eof()))
			{
				
				getline(u, line_u);
				if (line_u == "")
					break;
				std::stringstream s1(line_u);
																			//check registration status from data file
				while (getline(s1, word_u, ','))
					row1.push_back(word_u);
				
				if (usn_u == row1[0])
				{   if(row1[2] == "1")
					temp1 = "1";
					row1.clear();
					
				}
				row1.clear();
			}
			////////
			
			u.close();  
			f.open("username.csv", std::ios::in);
			while (!(f.eof()))
			{
				row.clear();
				getline(f, line);
				std::stringstream s(line);

				while (getline(s, word, ','))
					row.push_back(word);
				if (usn_s == row[0])												//login   code
				{
					count = 1;

					if (pass_s == row[1])
					{
						
						checkpage ^ c = gcnew checkpage(tb_user->Text->ToUpper(),temp1);    //going to check form
						this->Hide();
						c->ShowDialog();
						this->Show();
						tb_user->Text = "";
						tb_pass->Text = "";
						break;
					}
					if (pass_s != row[1] && count == 1)
						MessageBox::Show("Invalid Password", "Error", MessageBoxButtons::OK,MessageBoxIcon::Error);
				}
			}
			if (count == 0)
				MessageBox::Show("Username Does Not Exist","Username Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			
			f.close();
		}
	}
private: System::Void btregist_Click(System::Object^ sender, System::EventArgs^ e) {
	//SWITCHING TO REGISTER PANEL
	this->panel1->Visible = false;
	this->panel2->Visible = true;
	tb_user->Text = "";
	tb_pass->Text = "";
	lbsign->Text = "REGISTER";

}
private: System::Void btcancel_Click(System::Object^ sender, System::EventArgs^ e) {
	//SWITCHING TO LOGINPANEL
	this->panel2->Visible = false;
	this->panel1->Visible = true;
	tb_reguser->Text = "";
	tb_regpass->Text = "";
	tb_regid->Text = "";
	tb_name->Text = "";
	lbsign->Text = "SIGN IN";
}
private: System::Void btreg_regist_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = tb_regid->Text;
	std::string r_id_s = msclr::interop::marshal_as<std::string>(id);
	/////////////////
	int length = this->tb_regpass->Text->Length;
	if (r_id_s != "EIE")
		
	MessageBox::Show("Invalid Student ID", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	
	else
	{
		//register code//////////////////
		int count = 0;							//Register button
		std::fstream f;
		f.open("username.csv", std::ios::in);
		String^ r_usn = tb_reguser->Text->ToUpper();
		String^ r_pass = tb_regpass->Text;
		String^ name = tb_name->Text->Trim();
		std::string line, word, temp;
		std::vector<std::string> row;
		std::string r_usn_s = msclr::interop::marshal_as<std::string>(r_usn);
		std::string r_pass_s = msclr::interop::marshal_as<std::string>(r_pass);
		std::string r_name_s = msclr::interop::marshal_as<std::string>(name);
	    
		if (name->Length < 3)
		{
			MessageBox::Show("Name should be more than 3 charcaters", "Caution", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			count = 1;
			

		}
		if (length != 6)
		{
			MessageBox::Show("Password Should Contain 6 Characters", "Caution", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			count = 1;
			
		}

		while (!(f.eof()))
		{
			row.clear();
			getline(f, line);
			std::stringstream s(line);

			while (getline(s, word, ','))
				row.push_back(word);
			if (r_usn_s == row[0])
			{
				MessageBox::Show("USN IS ALREADY REGISTERED", "Caution", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				count = 1;
				break;
			}
			
		}
		if (count != 1)
		{
			
			MessageBox::Show("Registered","Registration",MessageBoxButtons::OK,MessageBoxIcon::Information);
			std::fstream fo;
			fo.open("username.csv", std::ios::out | std::ios::app);
			fo << "\n" << r_usn_s << ",";
			fo << r_pass_s;
			fo.close();
			// Open THE DATA file
			std::fstream fin;
			fin.open("data.csv", std::ios::out | std::ios::app | std::ios::in);
			fin << r_usn_s <<","<<r_name_s<<","<< "0"<<'\n';
			fin.close();
			//SWITCHING TO LOGINPANEL
			this->panel2->Visible = false;
			this->panel1->Visible = true;
			tb_reguser->Text = "";
			tb_regpass->Text = "";
			tb_regid->Text = "";
			tb_name->Text = "";
			lbsign->Text = "SIGN IN";
		}

		f.close();
	}
	//////////////////////////
}
	   public: char h;
private: System::Void tb_user_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	h = e->KeyChar;

	if (h == '\r')								// SWITCHING TO PASSWORD ON PRESSING ENTER KEY
	   tb_pass->Focus();
	
}
private: System::Void tb_pass_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	h = e->KeyChar;

	if (h == '\r')	                                 // SIGNING IN ON PRESSING ENTER KEY
		btsignin->PerformClick();
}
private: System::Void tb_reguser_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	h = e->KeyChar;

	if (h == '\r' )
	{
		tb_name->Focus();                          // SWITCHING TO NAME ON PRESSING ENTER KEY
	}

}
private: System::Void tb_regpass_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	h = e->KeyChar;

	if (h == '\r')
	{
		tb_regid->Focus();                      // SWITCHING TO STUD ID ON PRESSING ENTER KEY
	}
}
private: System::Void tb_regid_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	h = e->KeyChar;

	if (h == '\r')
		btreg_regist->PerformClick();           // RREGISTERING ON PRESSING ENTER KEY
}
private: System::Void tb_name_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	h = e->KeyChar;
	
	if (h == '\r')
		tb_regpass->Focus();           // switching to pass ON PRESSING ENTER KEY
}

private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	if(tb_regpass->PasswordChar)
	{
		label8->Text = "   HIDE";
		tb_regpass->PasswordChar = false;
	}
	else
	{
		label8->Text = "   SHOW";
		tb_regpass->PasswordChar = '*';

	}
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tb_pass->PasswordChar)
	{
		label9->Text = "   HIDE";
		tb_pass->PasswordChar = false;
	}
	else
	{
		label9->Text = "   SHOW";
		tb_pass->PasswordChar = '*';

	}

}
};
}
