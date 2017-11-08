//Δημιουργήστε μία συνάρτηση που θα δέχεται ως είσοδο έναν ακέραιο και θα επιστρέφει 0 αν
//είναι πρώτος αριθμός και 1 αν όχι. Υπόδειξη: Πρώτοι είναι οι αριθμοί που διαιρούνται μόνο με
//τον εαυτό τους και την μονάδα (1).

#include <iostream>
#include <string>
using namespace std;

//Input an int and return 0 if Even and 1 if is Odd.
bool isOdd(int n){
	if (n%2 != 0) {
		//cout << n << " is odd.\n";
		return 1;
	} else {
		//cout << n << " is even.\n";
		return 0;
	}
}

bool isEven(int n){
	if (isOdd(n))
		return false;
	else
		return true;
}

//Input an int and return 0 if Prime and 1 if is not.
bool isNotPrime(int n){
	if (n==1 || n == 2) {
		cout << n << " is a Prime.\n";
		return false; //1 and 2 are prime numbers;
	}else if ( isEven(n) ) {// An even num (except 2) cannot be a prime
		cout << n << " is NOT a Prime.\n";
		return true;
	}else { //if is Odd
		for(int i = 3; i*i <= n; ++i) {
		    if(n % i == 0) {
				//cout << i << " = i \n";
				cout << n << " is NOT a Prime.\n";
		    	return true;
		    }
		}
	}
	cout << n << " is a Prime.\n";
	return false;
}


int main(){
	int n = 1; 
	
	while(true) {
		cout << "Enter a positive integer (or 0 to quit): ";
		cin >> n;
		if (n==0) {
			return 0;
		}
		isNotPrime(n);
	}	
}
