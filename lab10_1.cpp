#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan , rate , ppy ;
    
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy ; 


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
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2);
	int i = 1 ;
	double pb , inte , total , nb ;
	pb = loan ; 
	inte = loan * (rate/100);
	total = pb + inte ;
	nb = total - ppy ;
	while( nb > 0 && ppy < loan ){
	cout << setw(13) << left << i ; 
	cout << setw(13) << left << pb ; 
	cout << setw(13) << left << inte ; 
	cout << setw(13) << left << total ;
	cout << setw(13) << left << ppy ;
	cout << setw(13) << left << nb ;
	i++ ; 
	pb = nb ;
	inte = pb * (rate/100) ;
	total = pb + inte ; 
	nb = total - ppy ;
	cout << "\n";
	}
	cout << setw(13) << left << i ; 
	cout << setw(13) << left << pb ; 
	cout << setw(13) << left << inte ; 
	cout << setw(13) << left << total ;
	ppy = total ;
	cout << setw(13) << left << ppy ;
	nb = total - ppy ;
	cout << setw(13) << left << nb ;
	return 0;
}