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
			this->Filterbtn->Location = System::Drawing::Point(479, 41);
			this->Filterbtn->Name = L"Filterbtn";
			this->Filterbtn->Size = System::Drawing::Size(75, 23);
			this->Filterbtn->TabIndex = 0;
			this->Filterbtn->Text = L"Negative";
			this->Filterbtn->UseVisualStyleBackColor = true;
			this->Filterbtn->Click += gcnew System::EventHandler(this, &MainForm::Filterbtn_Click);
			// 
			// Browsebtn
			// 
			this->Browsebtn->Location = System::Drawing::Point(479, 12);
			this->Browsebtn->Name = L"Browsebtn";
			this->Browsebtn->Size = System::Drawing::Size(75, 23);
			this->Browsebtn->TabIndex = 1;
			this->Browsebtn->Text = L"Browse";
			this->Browsebtn->UseVisualStyleBackColor = true;
			this->Browsebtn->Click += gcnew System::EventHandler(this, &MainForm::Browsebtn_Click);
			// 
			// Src
			// 
			this->Src->Location = System::Drawing::Point(12, 12);
			this->Src->Name = L"Src";
			this->Src->Size = System::Drawing::Size(461, 333);
			this->Src->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Src->TabIndex = 2;
			this->Src->TabStop = false;
			// 
			// redbtn
			// 
			this->redbtn->Location = System::Drawing::Point(479, 70);
			this->redbtn->Name = L"redbtn";
			this->redbtn->Size = System::Drawing::Size(75, 23);
			this->redbtn->TabIndex = 4;
			this->redbtn->Text = L"Rem Red";
			this->redbtn->UseVisualStyleBackColor = true;
			this->redbtn->Click += gcnew System::EventHandler(this, &MainForm::redbtn_Click);
			// 
			// greenbtn
			// 
			this->greenbtn->Location = System::Drawing::Point(479, 99);
			this->greenbtn->Name = L"greenbtn";
			this->greenbtn->Size = System::Drawing::Size(75, 23);
			this->greenbtn->TabIndex = 5;
			this->greenbtn->Text = L"Rem Green";
			this->greenbtn->UseVisualStyleBackColor = true;
			this->greenbtn->Click += gcnew System::EventHandler(this, &MainForm::greenbtn_Click);
			// 
			// bluebtn
			// 
			this->bluebtn->Location = System::Drawing::Point(479, 128);
			this->bluebtn->Name = L"bluebtn";
			this->bluebtn->Size = System::Drawing::Size(75, 23);
			this->bluebtn->TabIndex = 6;
			this->bluebtn->Text = L"Rem Blue";
			this->bluebtn->UseVisualStyleBackColor = true;
			this->bluebtn->Click += gcnew System::EventHandler(this, &MainForm::bluebtn_Click);
			// 
			// savebtn
			// 
			this->savebtn->Location = System::Drawing::Point(479, 322);
			this->savebtn->Name = L"savebtn";
			this->savebtn->Size = System::Drawing::Size(75, 23);
			this->savebtn->TabIndex = 7;
			this->savebtn->Text = L"Save";
			this->savebtn->UseVisualStyleBackColor = true;
			this->savebtn->Click += gcnew System::EventHandler(this, &MainForm::savebtn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
	private: System::Void Browsebtn_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ dial = gcnew OpenFileDialog();
		dial->Filter = "Image(*.bmp; *.jpg)|*.bmp;*.jpg|All files (*.*)|*.*||";
		if (dial->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}

		src = imread((char *)(void *)Marshal::StringToHGlobalAnsi(dial->FileName));

		refresh(gcnew Bitmap(dial->FileName));

	}

	private: System::Void Filterbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		cleanrefresh();
		imwrite("filtered.jpg", filter(-1, -1, -1));
		refresh(gcnew Bitmap("filtered.jpg"));
	}
	private: System::Void redbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		cleanrefresh();
		imwrite("filtered.jpg", filter(1, 1, 0));
		refresh(gcnew Bitmap("filtered.jpg"));
	}
	private: System::Void greenbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		cleanrefresh();
		imwrite("filtered.jpg", filter(1, 0, 1));
		refresh(gcnew Bitmap("filtered.jpg"));
	}
	private: System::Void bluebtn_Click(System::Object^  sender, System::EventArgs^  e) {
		cleanrefresh();
		imwrite("filtered.jpg", filter(0, 1, 1));
		refresh(gcnew Bitmap("filtered.jpg"));
	}
	void cleanrefresh() {
		System::Drawing::Image^ img = Src->Image;
		Src->Image = nullptr;
		delete img;
	}
	void refresh(Bitmap^ bmp) {
		System::Drawing::Image^ img = Src->Image;
		Src->Image = nullptr;
		delete img;
		Src->Image = bmp;
		Src->Refresh();
	}
	
	Mat filter(int R, int G, int B) {
		Mat buffer;
		src.copyTo(buffer);
		for (int r = 0; r < buffer.rows; r++) {
			for (int c = 0; c < buffer.cols; c++) {
				buffer.at<cv::Vec3b>(r, c)[0] *= B;//Changes the blue
				buffer.at<cv::Vec3b>(r, c)[1] *= G;//Changes the green
				buffer.at<cv::Vec3b>(r, c)[2] *= R;//Changes the red
			}
		}
		Mat editted = buffer;
		return buffer;
	}
	private: System::Void savebtn_Click(System::Object^  sender, System::EventArgs^  e) {
		// Displays a SaveFileDialog so the user can save the Image  
		// assigned to Button2.  
		SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter =
			"JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
		saveFileDialog1->Title = "Save an Image File";
		saveFileDialog1->ShowDialog();
		// If the file name is not an empty string, open it for saving.  
		if (saveFileDialog1->FileName != "")
		{
			// Saves the Image through a FileStream created by  
			// the OpenFile method.  
			System::IO::Stream ^ fs = saveFileDialog1->OpenFile();
			// Saves the Image in the appropriate ImageFormat based on  
			// the file type selected in the dialog box.  
			// Note that the FilterIndex property is one based. 
			this->Src->Image->Save(fs,
				System::Drawing::Imaging::ImageFormat::Jpeg);
			
			fs->Close();
		}
	}
};
}
