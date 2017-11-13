#pragma once

namespace loopBenchmarkproj3 {

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
		void compareLoops(System::Windows::Forms::Label^ forLabel, System::Windows::Forms::Label^ whileLabel, System::Windows::Forms::Label^ doLabel, System::Windows::Forms::ProgressBar^ forBar, System::Windows::Forms::ProgressBar^ whileBar, System::Windows::Forms::ProgressBar^ doBar, System::Windows::Forms::DataVisualization::Charting::Chart^  timeChart, System::Windows::Forms::TrackBar^  loopSize);

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
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ProgressBar^  forBar;
	private: System::Windows::Forms::ProgressBar^  whileBar;
	private: System::Windows::Forms::ProgressBar^  doBar;





	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  forLabel;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  whileLabel;
	private: System::Windows::Forms::Label^  doLabel;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  timeChart;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TrackBar^  loopAmount;


	private: System::Windows::Forms::TrackBar^  loopSize;








	private: System::ComponentModel::IContainer^  components;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->forBar = (gcnew System::Windows::Forms::ProgressBar());
			this->whileBar = (gcnew System::Windows::Forms::ProgressBar());
			this->doBar = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->whileLabel = (gcnew System::Windows::Forms::Label());
			this->forLabel = (gcnew System::Windows::Forms::Label());
			this->doLabel = (gcnew System::Windows::Forms::Label());
			this->timeChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->loopAmount = (gcnew System::Windows::Forms::TrackBar());
			this->loopSize = (gcnew System::Windows::Forms::TrackBar());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->loopAmount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->loopSize))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->forBar, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->whileBar, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->doBar, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->whileLabel, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->forLabel, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->doLabel, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->timeChart, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->button1, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->label5, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->label6, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->loopAmount, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->loopSize, 1, 6);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 85)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(644, 426);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"For Loop";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(291, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"While Loop";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(556, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Do Loop";
			// 
			// forBar
			// 
			this->forBar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->forBar->Location = System::Drawing::Point(14, 23);
			this->forBar->Maximum = 5000000;
			this->forBar->Name = L"forBar";
			this->forBar->Size = System::Drawing::Size(100, 14);
			this->forBar->TabIndex = 3;
			// 
			// whileBar
			// 
			this->whileBar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->whileBar->Location = System::Drawing::Point(272, 23);
			this->whileBar->Maximum = 5000000;
			this->whileBar->Name = L"whileBar";
			this->whileBar->Size = System::Drawing::Size(100, 14);
			this->whileBar->TabIndex = 4;
			// 
			// doBar
			// 
			this->doBar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->doBar->Location = System::Drawing::Point(530, 23);
			this->doBar->Maximum = 5000000;
			this->doBar->Name = L"doBar";
			this->doBar->Size = System::Drawing::Size(100, 14);
			this->doBar->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(278, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Last Run Results";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// whileLabel
			// 
			this->whileLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->whileLabel->AutoSize = true;
			this->whileLabel->Location = System::Drawing::Point(317, 63);
			this->whileLabel->Name = L"whileLabel";
			this->whileLabel->Size = System::Drawing::Size(10, 13);
			this->whileLabel->TabIndex = 11;
			this->whileLabel->Text = L"-";
			// 
			// forLabel
			// 
			this->forLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->forLabel->AutoSize = true;
			this->forLabel->Location = System::Drawing::Point(59, 63);
			this->forLabel->Name = L"forLabel";
			this->forLabel->Size = System::Drawing::Size(10, 13);
			this->forLabel->TabIndex = 9;
			this->forLabel->Text = L"-";
			// 
			// doLabel
			// 
			this->doLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->doLabel->AutoSize = true;
			this->doLabel->Location = System::Drawing::Point(575, 63);
			this->doLabel->Name = L"doLabel";
			this->doLabel->Size = System::Drawing::Size(10, 13);
			this->doLabel->TabIndex = 12;
			this->doLabel->Text = L"-";
			// 
			// timeChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->timeChart->ChartAreas->Add(chartArea1);
			legend1->Alignment = System::Drawing::StringAlignment::Center;
			legend1->DockedToChartArea = L"ChartArea1";
			legend1->IsDockedInsideChartArea = false;
			legend1->MaximumAutoSize = 20;
			legend1->Name = L"Legend1";
			legend1->TableStyle = System::Windows::Forms::DataVisualization::Charting::LegendTableStyle::Tall;
			this->timeChart->Legends->Add(legend1);
			this->timeChart->Location = System::Drawing::Point(122, 172);
			this->timeChart->Name = L"timeChart";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::LawnGreen;
			series1->Legend = L"Legend1";
			series1->LegendText = L"For Loop";
			series1->Name = L"forTime";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::MidnightBlue;
			series2->Legend = L"Legend1";
			series2->LegendText = L"While Loop";
			series2->Name = L"whileTime";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Magenta;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Do Loop";
			series3->Name = L"doTime";
			this->timeChart->Series->Add(series1);
			this->timeChart->Series->Add(series2);
			this->timeChart->Series->Add(series3);
			this->timeChart->Size = System::Drawing::Size(400, 250);
			this->timeChart->TabIndex = 13;
			this->timeChart->Text = L"timeChart";
			title1->Name = L"Title1";
			title1->Text = L"Time Graph (ms)";
			this->timeChart->Titles->Add(title1);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(250, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Size of Loops";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(536, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Amount of Loops";
			// 
			// loopAmount
			// 
			this->loopAmount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->loopAmount->Location = System::Drawing::Point(528, 103);
			this->loopAmount->Maximum = 8;
			this->loopAmount->Minimum = 1;
			this->loopAmount->Name = L"loopAmount";
			this->loopAmount->Size = System::Drawing::Size(104, 34);
			this->loopAmount->TabIndex = 18;
			this->loopAmount->Value = 1;
			// 
			// loopSize
			// 
			this->loopSize->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->loopSize->Location = System::Drawing::Point(12, 103);
			this->loopSize->Maximum = 5;
			this->loopSize->Minimum = 1;
			this->loopSize->Name = L"loopSize";
			this->loopSize->Size = System::Drawing::Size(104, 34);
			this->loopSize->TabIndex = 19;
			this->loopSize->Value = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 426);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Loop Benchmark";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->loopAmount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->loopSize))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int amount = Convert::ToInt64(loopAmount->Value);
	while (amount > 0) {
		compareLoops(forLabel, whileLabel, doLabel, forBar, whileBar, doBar, timeChart, loopSize);
		amount--;
	}
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
