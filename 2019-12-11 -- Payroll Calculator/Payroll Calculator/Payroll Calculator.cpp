// Payroll Calculator.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 12/9/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "string" // Gives us string variables

// Not sure what this is called
using namespace std; // Always add this!!!

///Functions
void GetData(string &Name, double &Hours, double &HourlyRate);
double GrossPay(double Hours, double HourlyRate);
double FedWithold(double GrossPay);
double StateWithold(double GrossPay);
double TotalDeductions(double FedWithold, double StateWithold, double Hospitalization);
double NetPay(double GrossPay, double TotalDeductions);
void Summary(string Name, double Hours, double HourlyRate, double GrossPay, double FedWithold, double StateWithold, double Hospitalization, double TotalDeductions, double NetPay);


int main()
{
	///VARIABLESSSSS
	//Gathered Info
	string Name = "John Doe";
	double Hours = 0;
	double HourlyRate = 0;
	double InternalHospitalization = 25.65;
	//Used Info
	double InternalGrossPay = 0;
	double InternalFedWithold = 0;
	double InternalStateWithold = 0;
	double InternalTotalDeductions = 0;
	double InternalNetPay = 0;

	///Get Info
	cout << "Hello There! Weclome to the Payroll Calculator!" << endl;
	GetData(Name, Hours, HourlyRate);
	//Calculate GrossPay & Deductions
	InternalGrossPay = GrossPay(Hours, HourlyRate);
	InternalFedWithold = FedWithold(InternalGrossPay);
	InternalStateWithold = StateWithold(InternalGrossPay);
	InternalTotalDeductions = TotalDeductions(InternalFedWithold, InternalStateWithold, InternalHospitalization);
	InternalNetPay = NetPay(InternalGrossPay, InternalTotalDeductions);
	//Output Stuff
	Summary(Name, Hours, HourlyRate, InternalGrossPay, InternalFedWithold, InternalStateWithold, InternalHospitalization, InternalTotalDeductions, InternalNetPay);

	///STOPPPPP
    return 0;
}

///Functionssss
//Get the info!!!
void GetData(string &Name, double &Hours, double &HourlyRate) {
	cout << "To get started, what is your Full Name?" << endl;
	getline(cin, Name);
	system("cls");
	cout << "Hey " << Name << ", How many hours did you work this week?" << endl;
	cin >> Hours;
	system("cls");
	cout << "Alright! Thank you for working " << Hours << " hour(s) this week!" << endl;
	cout << "What is your hourly rate?" << endl;
	cin >> HourlyRate;
	system("cls");
	cout << "Okay! Just to confirm: " << endl << Name << " you worked " << Hours << " hour(s) this week, at a rate of " << HourlyRate << endl;
	system("pause");
	system("cls");
}
//------
double GrossPay(double Hours, double HourlyRate) {
	return (Hours * HourlyRate);
}
//------
double FedWithold(double GrossPay) {
	return (GrossPay * 0.18);
}
//------
double StateWithold(double GrossPay) {
	return (GrossPay * 0.045);
}
//------
double TotalDeductions(double FedWithold, double StateWithold, double Hospitalization) {
	return (FedWithold + StateWithold + Hospitalization);
}
//------
double NetPay(double GrossPay, double TotalDeductions) {
	return (GrossPay - TotalDeductions);
}
//------
void Summary(string Name, double Hours, double HourlyRate, double GrossPay, double FedWithold, double StateWithold, double Hospitalization, double TotalDeductions, double NetPay) {
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
	cout << "----------------------------------" << endl;
	cout << "Employee: \t\t" << Name << endl;
	cout << "Hours Worked: \t\t" << Hours << endl;
	cout << "Hourly Rate: \t\t$" << HourlyRate << endl;
	cout << "Total Wages: \t\t$" << GrossPay << endl;
	cout << endl;
	cout << "Deductions: " << endl;
	cout << "Federal Witholding: \t$" << FedWithold << endl;
	cout << "State Witholding: \t$" << StateWithold << endl;
	cout << "Hospitalization: \t$" << Hospitalization << endl;
	cout << "----------------------------------" << endl;
	cout << "Total Deductions: \t$" << TotalDeductions << endl;
	cout << endl;
	cout << "Net Pay: \t\t$" << NetPay << endl;
	cout << "----------------------------------" << endl;
	cout << endl;
	system("pause");
}