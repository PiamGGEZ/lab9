#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
	

int main(){	
	double loan, rate, pay, inter, total, newb; 
    int year = 1; 
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while (loan > 0)
	{
		inter = loan * (rate / 100); 
        total = loan + inter;        
        if (pay > total) pay = total;   
        newb = total - pay; 
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year;
		cout << setw(13) << left << loan; 
		cout << setw(13) << left << inter; 
		cout << setw(13) << left << total; 
		cout << setw(13) << left << pay;
		cout << setw(13) << left << newb;
		cout << "\n";
		loan = newb;
        year++;
		
	}
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	return 0;
}
