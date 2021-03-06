#pragma once
#ifndef MAIN_H_INCLUDED__
#define MAIN_H_INCLUDED__
#include "Database.h"
namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
		MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
		//MySqlCommandBuilder^ cd = gcnew MySqlCommandBuilder(sda);

		
	private:
		bool filled = false;
		bool mouseDown = false;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;






			 Point lastLocation;
	public:
		SearchForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ModButton;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::BindingSource^  bindingSource1;






	private: System::Windows::Forms::TextBox^  first_name_textBox;
	private: System::Windows::Forms::TextBox^  last_name_textBox;
	private: System::Windows::Forms::TextBox^  address_textBox;
	private: System::Windows::Forms::TextBox^  wage_textBox;
	private: System::Windows::Forms::TextBox^  position_textBox;





	private: System::Windows::Forms::TextBox^  idEmployee_textBox;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  searchBTN;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  closePage;








	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchForm::typeid));
			this->ModButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->first_name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->last_name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->address_textBox = (gcnew System::Windows::Forms::TextBox());
			this->wage_textBox = (gcnew System::Windows::Forms::TextBox());
			this->position_textBox = (gcnew System::Windows::Forms::TextBox());
			this->idEmployee_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->searchBTN = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->closePage = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->BeginInit();
			this->SuspendLayout();
			// 
			// ModButton
			// 
			this->ModButton->Location = System::Drawing::Point(163, 305);
			this->ModButton->Margin = System::Windows::Forms::Padding(4);
			this->ModButton->Name = L"ModButton";
			this->ModButton->Size = System::Drawing::Size(100, 28);
			this->ModButton->TabIndex = 0;
			this->ModButton->Text = L"Modify";
			this->ModButton->UseVisualStyleBackColor = true;
			this->ModButton->Click += gcnew System::EventHandler(this, &SearchForm::ModButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(325, 10);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tracker inc. ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Location = System::Drawing::Point(24, 94);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"First Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Location = System::Drawing::Point(24, 127);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Last Name:";
			this->label3->Click += gcnew System::EventHandler(this, &SearchForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Location = System::Drawing::Point(25, 226);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 19);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Position:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Location = System::Drawing::Point(24, 159);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 19);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Location = System::Drawing::Point(25, 191);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 19);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Wage:";
			// 
			// first_name_textBox
			// 
			this->first_name_textBox->Location = System::Drawing::Point(116, 95);
			this->first_name_textBox->Margin = System::Windows::Forms::Padding(4);
			this->first_name_textBox->Name = L"first_name_textBox";
			this->first_name_textBox->Size = System::Drawing::Size(132, 22);
			this->first_name_textBox->TabIndex = 8;
			this->first_name_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::first_name_textBox_TextChanged);
			// 
			// last_name_textBox
			// 
			this->last_name_textBox->Location = System::Drawing::Point(116, 127);
			this->last_name_textBox->Margin = System::Windows::Forms::Padding(4);
			this->last_name_textBox->Name = L"last_name_textBox";
			this->last_name_textBox->Size = System::Drawing::Size(132, 22);
			this->last_name_textBox->TabIndex = 9;
			this->last_name_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::last_name_textBox_TextChanged);
			// 
			// address_textBox
			// 
			this->address_textBox->Location = System::Drawing::Point(116, 159);
			this->address_textBox->Margin = System::Windows::Forms::Padding(4);
			this->address_textBox->Name = L"address_textBox";
			this->address_textBox->Size = System::Drawing::Size(132, 22);
			this->address_textBox->TabIndex = 10;
			this->address_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::address_textBox_TextChanged);
			// 
			// wage_textBox
			// 
			this->wage_textBox->Location = System::Drawing::Point(116, 191);
			this->wage_textBox->Margin = System::Windows::Forms::Padding(4);
			this->wage_textBox->Name = L"wage_textBox";
			this->wage_textBox->Size = System::Drawing::Size(132, 22);
			this->wage_textBox->TabIndex = 11;
			this->wage_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::wage_textBox_TextChanged);
			// 
			// position_textBox
			// 
			this->position_textBox->Location = System::Drawing::Point(116, 223);
			this->position_textBox->Margin = System::Windows::Forms::Padding(4);
			this->position_textBox->Name = L"position_textBox";
			this->position_textBox->Size = System::Drawing::Size(132, 22);
			this->position_textBox->TabIndex = 12;
			this->position_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::position_textBox_TextChanged);
			// 
			// idEmployee_textBox
			// 
			this->idEmployee_textBox->Location = System::Drawing::Point(116, 63);
			this->idEmployee_textBox->Margin = System::Windows::Forms::Padding(4);
			this->idEmployee_textBox->Name = L"idEmployee_textBox";
			this->idEmployee_textBox->Size = System::Drawing::Size(132, 22);
			this->idEmployee_textBox->TabIndex = 13;
			this->idEmployee_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::idEmployee_textBox_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Location = System::Drawing::Point(24, 63);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 19);
			this->label7->TabIndex = 14;
			this->label7->Text = L"ID";
			// 
			// searchBTN
			// 
			this->searchBTN->Location = System::Drawing::Point(163, 357);
			this->searchBTN->Margin = System::Windows::Forms::Padding(4);
			this->searchBTN->Name = L"searchBTN";
			this->searchBTN->Size = System::Drawing::Size(100, 28);
			this->searchBTN->TabIndex = 15;
			this->searchBTN->Text = L"Search";
			this->searchBTN->UseVisualStyleBackColor = true;
			this->searchBTN->Click += gcnew System::EventHandler(this, &SearchForm::searchBTN_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(163, 406);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Display";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->ModButton);
			this->panel1->Controls->Add(this->searchBTN);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->idEmployee_textBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->position_textBox);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->wage_textBox);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->address_textBox);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->last_name_textBox);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->first_name_textBox);
			this->panel1->Location = System::Drawing::Point(0, 33);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1356, 576);
			this->panel1->TabIndex = 17;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SearchForm::panel1_Paint);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(25, 385);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 19;
			this->button4->Text = L"delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SearchForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(25, 347);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Modify1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SearchForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 308);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Display1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SearchForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(295, 63);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(889, 480);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SearchForm::dataGridView1_CellContentClick_1);
			// 
			// closePage
			// 
			this->closePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closePage.BackgroundImage")));
			this->closePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closePage->Location = System::Drawing::Point(1313, 0);
			this->closePage->Margin = System::Windows::Forms::Padding(4);
			this->closePage->Name = L"closePage";
			this->closePage->Size = System::Drawing::Size(40, 32);
			this->closePage->TabIndex = 17;
			this->closePage->TabStop = false;
			this->closePage->Click += gcnew System::EventHandler(this, &SearchForm::closePage_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(25, 423);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Id search";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SearchForm::button5_Click);
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(1356, 609);
			this->Controls->Add(this->closePage);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SearchForm";
			this->Text = L"Main";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchForm::SearchForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchForm::SearchForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchForm::SearchForm_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
/*private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}*/
private: System::Void ModButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SQLConnect^ db = gcnew SQLConnect();
	try {
		db->openConnection();
		String^ sql;
		sql = sql->Format("UPDATE employee SET first_name='" + first_name_textBox->Text + "',last_name='" + last_name_textBox->Text + "',address='" + address_textBox->Text + "',wages='" + wage_textBox->Text + "',position='" + position_textBox->Text + "'""WHERE idEmployee LIKE '%" + idEmployee_textBox->Text + "'");
		MessageBox::Show(sql);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		MySqlDataReader^ dataset = cmd->ExecuteReader();
		
		int i = 0;
		while (dataset->Read()) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = dataset[0];
			dataGridView1->Rows[i]->Cells[1]->Value = dataset[1];
			dataGridView1->Rows[i]->Cells[2]->Value = dataset[2];
			dataGridView1->Rows[i]->Cells[3]->Value = dataset[3];
			dataGridView1->Rows[i]->Cells[4]->Value = dataset[4];
			dataGridView1->Rows[i]->Cells[5]->Value = dataset[5];
			i++;
		}
	}
	catch (MySqlException^ err) {
		MessageBox::Show(err->ToString());
	}
	db->closeConnection();
	
	
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
}
private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void searchBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	SQLConnect^ db = gcnew SQLConnect();
	try {
		db->openConnection();
		String^ sql;
		sql = sql->Format("SELECT idEmployee, first_name, last_name, address, wages, position FROM Employee WHERE idEmployee LIKE '" + idEmployee_textBox->Text + "%'");
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		//cmd->ExecuteNonQuery();
		MySqlDataReader^ dataset = cmd->ExecuteReader();
		int i = 0;
		while (dataset->Read()) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = dataset[0];
			dataGridView1->Rows[i]->Cells[1]->Value = dataset[1];
			dataGridView1->Rows[i]->Cells[2]->Value = dataset[2];
			dataGridView1->Rows[i]->Cells[3]->Value = dataset[3];
			dataGridView1->Rows[i]->Cells[4]->Value = dataset[4];
			i++;
			//dataGridView1->DataSource = dataset;
		}
	}
	catch (MySqlException^ err) {
		MessageBox::Show(err->ToString());
	}
	db->closeConnection();

}
private: System::Void idEmployee_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void first_name_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void last_name_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void address_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void wage_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void position_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		filled = true;
	}
	else
	{
		filled = false;
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SQLConnect^ db = gcnew SQLConnect();
	try {
		db->openConnection();
		String^ sql;
		sql = sql->Format("SELECT idEmployee, first_name, last_name, address, wages, position FROM Employee");
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		//cmd->ExecuteNonQuery();
		MySqlDataReader^ dataset = cmd->ExecuteReader();
		int i = 0;
		while (dataset->Read()) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = dataset[0];
			dataGridView1->Rows[i]->Cells[1]->Value = dataset[1];
			dataGridView1->Rows[i]->Cells[2]->Value = dataset[2];
			dataGridView1->Rows[i]->Cells[3]->Value = dataset[3];
			dataGridView1->Rows[i]->Cells[4]->Value = dataset[4];
			i++;
			//dataGridView1->DataSource = dataset;
		}
	}
	catch (MySqlException^ err) {
		MessageBox::Show(err->ToString());
	}
	db->closeConnection();
}

private: System::Void closePage_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void SearchForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = true;
	lastLocation = e->Location;
}
private: System::Void SearchForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
		this->Update();
	}
}
private: System::Void SearchForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring ="datasource=localhost;port=3306;username=root;password=8391";
	
	MySqlConnection^ condatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmddatabase = gcnew MySqlCommand("SELECT * FROM payroll.employee;", condatabase);
	//MySqlDataReader ^ myReader;
	
	try {

		DataTable^ dt = gcnew DataTable();
	
	
		sda->SelectCommand = cmddatabase;
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;
	
	}
	catch (Exception^ex) {

		MessageBox::Show(ex->Message);
	}

	

}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = "datasource=localhost;port=3306;username=root;password=8391";

	MySqlConnection^ condatabase = gcnew MySqlConnection(constring);

	int id = Int32::Parse(idEmployee_textBox->Text);
	String^ Fname = first_name_textBox->Text;
	String^ Lname = last_name_textBox->Text;
	String^ add = address_textBox->Text;
	String^ pos = position_textBox->Text;
	double w = Double::Parse(wage_textBox->Text);


	MySqlCommand^ cmddatabase = gcnew MySqlCommand("update payroll.employee set idEmployee='"+id+"',first_name='"+Fname+"',last_name='"+Lname+"',address='"+add+"',position='"+pos+"',wages='"+w+"' WHERE idEmployee="+id+"",condatabase);
	condatabase->Open();
	MySqlDataReader ^ myReader = cmddatabase->ExecuteReader();
	MessageBox::Show(" User updated ");
	condatabase->Close();


	//MySqlCommandBuilder^ cd = gcnew MySqlCommandBuilder(sda);
	//DataTable^ dt = gcnew DataTable();
		//sda->Update(dt);
		//dt->AcceptChanges();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = "datasource=localhost;port=3306;username=root;password=8391";
	MySqlConnection^ condatabase = gcnew MySqlConnection(constring);
	int id = Int32::Parse(idEmployee_textBox->Text);
	MySqlCommand^ cmddatabase = gcnew MySqlCommand("delete from payroll.employee WHERE idEmployee="+id+"",condatabase);
	condatabase->Open();
	
	MySqlDataReader ^ myReader = cmddatabase->ExecuteReader();
	MessageBox::Show(" User Deleted ");
	condatabase->Close();

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=8391";

	MySqlConnection^ condatabase = gcnew MySqlConnection(constring);
	int id = Int32::Parse(idEmployee_textBox->Text);
	MySqlCommand^ cmddatabase = gcnew MySqlCommand("SELECT * FROM payroll.employee  WHERE idEmployee=" + id + "", condatabase);
	//MySqlDataReader ^ myReader;

	try {

		DataTable^ dt = gcnew DataTable();


		sda->SelectCommand = cmddatabase;
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;

	}
	catch (Exception^ex) {

		MessageBox::Show(ex->Message);
	}



}
};
}
#endif