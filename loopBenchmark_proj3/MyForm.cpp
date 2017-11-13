#include "MyForm.h"
#include <chrono>
#include <iostream>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace std::chrono;
using namespace std;

void countFor(System::Windows::Forms::ProgressBar^ forBar, System::Windows::Forms::TrackBar^  loopSize) {
	long long number = 0;
	long long size = Convert::ToInt64(loopSize->Value) * 1000000;
	forBar->Maximum = size;
	for (long long i = 0; i != size; i++) {
		number += 1;
		forBar->Increment(1);
	}
}

void countWhile(System::Windows::Forms::ProgressBar^ whileBar, System::Windows::Forms::TrackBar^  loopSize) {
	long long i = 0;
	long long size = Convert::ToInt64(loopSize->Value) * 1000000;
	whileBar->Maximum = size;
	while (i != size) {
		i++;
		whileBar->Increment(1);
	}
}

void countDo(System::Windows::Forms::ProgressBar^ doBar, System::Windows::Forms::TrackBar^  loopSize) {
	long long i = 0;
	long long size = Convert::ToInt64(loopSize->Value) * 1000000;
	doBar->Maximum = size;
	do {
		i++;
		doBar->Increment(1);
	} while (i != size);
}

void loopBenchmarkproj3::MyForm::compareLoops (System::Windows::Forms::Label^ forLabel, System::Windows::Forms::Label^ whileLabel, System::Windows::Forms::Label^ doLabel, System::Windows::Forms::ProgressBar^ forBar, System::Windows::Forms::ProgressBar^ whileBar, System::Windows::Forms::ProgressBar^ doBar, System::Windows::Forms::DataVisualization::Charting::Chart^  timeChart, System::Windows::Forms::TrackBar^  loopSize){
	forBar->Value = 0;
	whileBar->Value = 0;
	doBar->Value = 0;
	high_resolution_clock::time_point t1For = high_resolution_clock::now();
	countFor(forBar, loopSize);
	high_resolution_clock::time_point t2For = high_resolution_clock::now();

	auto durationFor = duration_cast<microseconds>(t2For - t1For).count();
	auto durationForMS = durationFor / 1000;
	timeChart->Series["forTime"]->Points->AddY(durationForMS);

	high_resolution_clock::time_point t1While = high_resolution_clock::now();
	countWhile(whileBar, loopSize);
	high_resolution_clock::time_point t2While = high_resolution_clock::now();

	auto durationWhile = duration_cast<microseconds>(t2While - t1While).count();
	auto durationWhileMS = durationWhile / 1000;
	timeChart->Series["whileTime"]->Points->AddY(durationWhileMS);

	high_resolution_clock::time_point t1Do = high_resolution_clock::now();
	countDo(doBar, loopSize);
	high_resolution_clock::time_point t2Do = high_resolution_clock::now();
	
	auto durationDo = duration_cast<microseconds>(t2Do - t1Do).count();
	auto durationDoMS = durationDo / 1000;
	timeChart->Series["doTime"]->Points->AddY(durationDoMS);

	forLabel->Text = Convert::ToString(durationFor) + " µs (" + Convert::ToString(durationForMS) + " ms)";
	whileLabel->Text = Convert::ToString(durationWhile) + " µs (" + Convert::ToString(durationWhileMS) + " ms)";
	doLabel->Text = Convert::ToString(durationDo) + " µs (" + Convert::ToString(durationDoMS) + " ms)";
}

[STAThread]
void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	loopBenchmarkproj3::MyForm form;
	Application::Run(%form);
}