#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgcodecs\imgcodecs.hpp>


namespace Filter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace cv;

	Mat src;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Filterbtn;
	protected:

	private: System::Windows::Forms::Button^  Browsebtn;
	private: System::Windows::Forms::PictureBox^  Src;

	private: System::Windows::Forms::Button^  redbtn;
	private: System::Windows::Forms::Button^  greenbtn;
	private: System::Windows::Forms::Button^  bluebtn;
	private: System::Windows::Forms::Button^  savebtn;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->Filterbtn = (gcnew System::Windows::Forms::Button());
			this->Browsebtn = (gcnew System::Windows::Forms::Button());
			this->Src = (gcnew System::Windows::Forms::PictureBox());
			this->redbtn = (gcnew System::Windows::Forms::Button());
			this->greenbtn = (gcnew System::Windows::Forms::Button());
			this->bluebtn = (gcnew System::Windows::Forms::Button());
			this->savebtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Src))->BeginInit();
			this->SuspendLayout();
			// 
			// Filterbtn
			// 
			this->Filterbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Filterbtn.BackgroundImage")));
			this->Filterbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Filterbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Filterbtn->Location = System::Drawing::Point(479, 88);
			this->Filterbtn->Name = L"Filterbtn";
			this->Filterbtn->Size = System::Drawing::Size(84, 31);
			this->Filterbtn->TabIndex = 0;
			this->Filterbtn->UseVisualStyleBackColor = true;
			this->Filterbtn->Click += gcnew System::EventHandler(this, &MainForm::Filterbtn_Click);
			// 
			// Browsebtn
			// 
			this->Browsebtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Browsebtn.BackgroundImage")));
			this->Browsebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Browsebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Browsebtn->Location = System::Drawing::Point(479, 12);
			this->Browsebtn->Name = L"Browsebtn";
			this->Browsebtn->Size = System::Drawing::Size(84, 31);
			this->Browsebtn->TabIndex = 1;
			this->Browsebtn->UseVisualStyleBackColor = true;
			this->Browsebtn->Click += gcnew System::EventHandler(this, &MainForm::Browsebtn_Click);
			// 
			// Src
			// 
			this->Src->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Src->Location = System::Drawing::Point(12, 12);
			this->Src->Name = L"Src";
			this->Src->Size = System::Drawing::Size(461, 333);
			this->Src->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Src->TabIndex = 2;
			this->Src->TabStop = false;
			// 
			// redbtn
			// 
			this->redbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redbtn.BackgroundImage")));
			this->redbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->redbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->redbtn->Location = System::Drawing::Point(479, 125);
			this->redbtn->Name = L"redbtn";
			this->redbtn->Size = System::Drawing::Size(84, 31);
			this->redbtn->TabIndex = 4;
			this->redbtn->UseVisualStyleBackColor = true;
			this->redbtn->Click += gcnew System::EventHandler(this, &MainForm::redbtn_Click);
			// 
			// greenbtn
			// 
			this->greenbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"greenbtn.BackgroundImage")));
			this->greenbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->greenbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->greenbtn->Location = System::Drawing::Point(479, 162);
			this->greenbtn->Name = L"greenbtn";
			this->greenbtn->Size = System::Drawing::Size(84, 31);
			this->greenbtn->TabIndex = 5;
			this->greenbtn->UseVisualStyleBackColor = true;
			this->greenbtn->Click += gcnew System::EventHandler(this, &MainForm::greenbtn_Click);
			// 
			// bluebtn
			// 
			this->bluebtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bluebtn.BackgroundImage")));
			this->bluebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bluebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bluebtn->Location = System::Drawing::Point(479, 199);
			this->bluebtn->Name = L"bluebtn";
			this->bluebtn->Size = System::Drawing::Size(84, 31);
			this->bluebtn->TabIndex = 6;
			this->bluebtn->UseVisualStyleBackColor = true;
			this->bluebtn->Click += gcnew System::EventHandler(this, &MainForm::bluebtn_Click);
			// 
			// savebtn
			// 
			this->savebtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"savebtn.BackgroundImage")));
			this->savebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->savebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->savebtn->Location = System::Drawing::Point(479, 314);
			this->savebtn->Name = L"savebtn";
			this->savebtn->Size = System::Drawing::Size(84, 31);
			this->savebtn->TabIndex = 7;
			this->savebtn->UseVisualStyleBackColor = true;
			this->savebtn->Click += gcnew System::EventHandler(this, &MainForm::savebtn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(566, 357);
			this->Controls->Add(this->savebtn);
			this->Controls->Add(this->bluebtn);
			this->Controls->Add(this->greenbtn);
			this->Controls->Add(this->redbtn);
			this->Controls->Add(this->Src);
			this->Controls->Add(this->Browsebtn);
			this->Controls->Add(this->Filterbtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MainForm";
			this->Text = L"ImageFilter";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Src))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//Load image.
	private: System::Void Browsebtn_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ dial = gcnew OpenFileDialog();
		dial->Filter = "Image(*.bmp; *.jpg)|*.bmp;*.jpg|All files (*.*)|*.*||";
		if (dial->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}

		src = imread((char *)(void *)Marshal::StringToHGlobalAnsi(dial->FileName));

		refresh(gcnew Bitmap(dial->FileName));

	}
	//Negative filter.
	private: System::Void Filterbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		cleanimg();
		try {
			imwrite("filtered.jpg", filter(-1, -1, -1));
			refresh(gcnew Bitmap("filtered.jpg"));
		}
		catch (int e) {}
	}
	//No red color filter.
	private: System::Void redbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		cleanimg();
		try{
			imwrite("filtered.jpg", filter(1, 1, 0));
			refresh(gcnew Bitmap("filtered.jpg"));
		}
		catch(int e){}
	}
	//No green color filter.
	private: System::Void greenbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		cleanimg();
		try {
			imwrite("filtered.jpg", filter(1, 0, 1));
			refresh(gcnew Bitmap("filtered.jpg"));
		}
		catch (int e) {}
	}
	//No blue color filter.
	private: System::Void bluebtn_Click(System::Object^  sender, System::EventArgs^  e) {
		cleanimg();
		try {
			imwrite("filtered.jpg", filter(0, 1, 1));
			refresh(gcnew Bitmap("filtered.jpg"));
		}
		catch (int e) {}
	}
	//Unload previous image from the application.
	void cleanimg() {
		System::Drawing::Image^ img = Src->Image;
		Src->Image = nullptr;
		delete img;
	}
	//Add new image to the application and refresh PictureBox
	void refresh(Bitmap^ bmp) {
		cleanimg();
		Src->Image = bmp;
		Src->Refresh();
	}
	//Filter the Red, Green and Blue values of the image.
	Mat filter(int R, int G, int B) {
		Mat buffer;
		src.copyTo(buffer);
		for (int r = 0; r < buffer.rows; r++) {
			for (int c = 0; c < buffer.cols; c++) {
				buffer.at<cv::Vec3b>(r, c)[0] *= B;//Changes the blue color.
				buffer.at<cv::Vec3b>(r, c)[1] *= G;//Changes the green color.
				buffer.at<cv::Vec3b>(r, c)[2] *= R;//Changes the red color.
			}
		}
		return buffer;
	}
	//Save image to destination folder.
	private: System::Void savebtn_Click(System::Object^  sender, System::EventArgs^  e) {  
		SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter =
			"JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
		saveFileDialog1->Title = "Save an Image File";
		saveFileDialog1->ShowDialog();  
		if (saveFileDialog1->FileName != "")
		{
			System::IO::Stream ^ fs = saveFileDialog1->OpenFile();
			this->Src->Image->Save(fs,
				System::Drawing::Imaging::ImageFormat::Jpeg);
			cleanimg();
			remove("filtered.jpg");
			fs->Close();
		}
	}
	//References: http://www.cplusplus.com
};
}
