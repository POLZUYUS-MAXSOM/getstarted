#pragma once
namespace Project4 {
	using namespace System::Diagnostics;
	using namespace System::Windows;
	using namespace System::Globalization;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			Microsoft::Web::WebView2::WinForms::WebView2^ myDino = gcnew Microsoft::Web::WebView2::WinForms::WebView2();
			myDino->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Controls->Add(myDino, 0, 0);
			myDino->EnsureCoreWebView2Async(nullptr);
			String^ appDir = System::AppDomain::CurrentDomain->BaseDirectory;
			String^ htmlPath = System::IO::Path::Combine(appDir, "game\\index.html");
			myDino->Source = gcnew System::Uri(htmlPath);


			this->MaximizedBounds = Screen::FromHandle(this->Handle)->WorkingArea;
			this->KeyPreview = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ close;
	private: System::Windows::Forms::Button^ maximise;
	protected:

	protected:

	private: System::Windows::Forms::Button^ mimimize;

	public:
		String^ shortlang = "";
		bool isDragging = false;
		Point startPoint;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	public: System::Windows::Forms::Label^ form_name;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ OMS;
	private: System::Windows::Forms::Button^ OE;
	private: System::Windows::Forms::Button^ AW;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;

	public: System::Windows::Forms::Label^ label1;
	private:

	public:
	private:

	private:

	public:
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->close = (gcnew System::Windows::Forms::Button());
			this->maximise = (gcnew System::Windows::Forms::Button());
			this->mimimize = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->form_name = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->OMS = (gcnew System::Windows::Forms::Button());
			this->OE = (gcnew System::Windows::Forms::Button());
			this->AW = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::Red;
			this->close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close->Dock = System::Windows::Forms::DockStyle::Fill;
			this->close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close->Font = (gcnew System::Drawing::Font(L"Marlett", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->close->ForeColor = System::Drawing::Color::White;
			this->close->Location = System::Drawing::Point(619, 3);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(35, 23);
			this->close->TabIndex = 0;
			this->close->Text = L"r";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// maximise
			// 
			this->maximise->BackColor = System::Drawing::SystemColors::ControlLight;
			this->maximise->Cursor = System::Windows::Forms::Cursors::Hand;
			this->maximise->Dock = System::Windows::Forms::DockStyle::Fill;
			this->maximise->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->maximise->Font = (gcnew System::Drawing::Font(L"Marlett", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->maximise->ForeColor = System::Drawing::Color::White;
			this->maximise->Location = System::Drawing::Point(589, 3);
			this->maximise->Name = L"maximise";
			this->maximise->Size = System::Drawing::Size(24, 23);
			this->maximise->TabIndex = 1;
			this->maximise->Text = L"1";
			this->maximise->UseVisualStyleBackColor = false;
			this->maximise->Click += gcnew System::EventHandler(this, &MyForm::maximise_Click);
			// 
			// mimimize
			// 
			this->mimimize->BackColor = System::Drawing::SystemColors::ControlLight;
			this->mimimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mimimize->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mimimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mimimize->Font = (gcnew System::Drawing::Font(L"Marlett", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->mimimize->ForeColor = System::Drawing::Color::White;
			this->mimimize->Location = System::Drawing::Point(544, 3);
			this->mimimize->Name = L"mimimize";
			this->mimimize->Size = System::Drawing::Size(39, 23);
			this->mimimize->TabIndex = 2;
			this->mimimize->Text = L"0";
			this->mimimize->UseVisualStyleBackColor = false;
			this->mimimize->Click += gcnew System::EventHandler(this, &MyForm::mimimize_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				92.30769F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				7.692307F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel1->Controls->Add(this->mimimize, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->close, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->maximise, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->form_name, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(657, 29);
			this->tableLayoutPanel1->TabIndex = 3;
			this->tableLayoutPanel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Form1_MouseDown);
			this->tableLayoutPanel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Form1_MouseMove);
			this->tableLayoutPanel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Form1_MouseUp);
			// 
			// form_name
			// 
			this->form_name->AutoSize = true;
			this->form_name->Dock = System::Windows::Forms::DockStyle::Fill;
			this->form_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->form_name->Location = System::Drawing::Point(3, 0);
			this->form_name->Name = L"form_name";
			this->form_name->Size = System::Drawing::Size(535, 29);
			this->form_name->TabIndex = 3;
			this->form_name->Text = L"welcome to windows";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.49484F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				23.3677F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel2->Controls->Add(this->OMS, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->OE, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->AW, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 32);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 13.03116F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 86.96884F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(657, 53);
			this->tableLayoutPanel2->TabIndex = 4;
			// 
			// OMS
			// 
			this->OMS->Dock = System::Windows::Forms::DockStyle::Fill;
			this->OMS->Location = System::Drawing::Point(440, 3);
			this->OMS->Name = L"OMS";
			this->OMS->Size = System::Drawing::Size(214, 47);
			this->OMS->TabIndex = 7;
			this->OMS->Text = L"open Microsoft Store";
			this->OMS->UseVisualStyleBackColor = true;
			this->OMS->Click += gcnew System::EventHandler(this, &MyForm::OMS_Click);
			// 
			// OE
			// 
			this->OE->Dock = System::Windows::Forms::DockStyle::Fill;
			this->OE->Location = System::Drawing::Point(184, 3);
			this->OE->Name = L"OE";
			this->OE->Size = System::Drawing::Size(250, 47);
			this->OE->TabIndex = 6;
			this->OE->Text = L"open edge on download chrome page";
			this->OE->UseVisualStyleBackColor = true;
			this->OE->Click += gcnew System::EventHandler(this, &MyForm::OE_Click);
			// 
			// AW
			// 
			this->AW->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AW->Location = System::Drawing::Point(3, 3);
			this->AW->Name = L"AW";
			this->AW->Size = System::Drawing::Size(175, 47);
			this->AW->TabIndex = 5;
			this->AW->Text = L"about windows";
			this->AW->UseVisualStyleBackColor = true;
			this->AW->Click += gcnew System::EventHandler(this, &MyForm::AW_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->label1, 0, 1);
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 88);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 95.83334F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 4.166667F)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(657, 387);
			this->tableLayoutPanel3->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 370);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(651, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"creator https://github.com/wayou/t-rex-runner";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 487);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);

		}
		void SetRussianLanguage() {
			this->form_name->Text = "добро пожаловать в виндовс";
			this->AW->Text = "o windows";
			this->OE->Text = "открыть браузер edge с ссылкой на скачивание chrome";
			this->OMS->Text = "открыть microsoft store";
		}
		
void Form1_MouseDown(Object^ sender, MouseEventArgs^ e)
{
	if (e->Button == Forms::MouseButtons::Left)
	{
		isDragging = true;
		startPoint = e->Location;
	}
}

void Form1_MouseMove(Object^ sender, MouseEventArgs^ e)
{
	if (isDragging)
	{
		this->Location = Point(this->Location.X + (e->X - startPoint.X),
			this->Location.Y + (e->Y - startPoint.Y));
	}
}

void Form1_MouseUp(Object^ sender, MouseEventArgs^ e)
{
	isDragging = false;
}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->shortlang = CultureInfo::CurrentCulture->TwoLetterISOLanguageName;
		String^ gamePath = System::IO::Path::GetFullPath("game/index.html");
		
		if (!System::IO::File::Exists(gamePath)) {
			MessageBox::Show("‘айл не найден по пути: " + gamePath);
		}

		if (this->shortlang == "ru") {
			SetRussianLanguage();
		}
	}
		   
	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == FormWindowState::Maximized) {
			this->maximise->Text = "2";
		}
		if (this->WindowState == FormWindowState::Normal) {
			this->maximise->Text = "1";
		}

	}
private: System::Void mimimize_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}	
private: System::Void maximise_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Maximized) {
		this->WindowState = FormWindowState::Normal;
	}
	else {
		this->WindowState = FormWindowState::Maximized;
	}
}
private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
	Windows::Forms::Application::Exit();
}
private: System::Void AW_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ myCommand = "winver";
	ProcessStartInfo^ startInfo = gcnew ProcessStartInfo(myCommand);
	Process::Start(startInfo);
}

private: System::Void OE_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("msedge", "https://www.google.com/chrome/");
}

private: System::Void OMS_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("ms-windows-store:");
}
};
}
