//Άσκηση 1.1
//Δημιουργήστε μία συνάρτηση που θα δέχεται ως είσοδο έναν ακέραιο και θα επιστρέφει 0 αν
//είναι άρτιος και 1 αν είναι περιττός.


#include <iostream>
#include <string>
using namespace std;

//Input an int and return 0 if Even and 1 if is Odd.
bool isOdd(int n){
	if (n%2 != 0) {
		cout << n << " is odd.\n";
		return 1;
	} else {
		cout << n << " is even.\n";
		return 0;
	}
}

int main(){
	int n; 
	
	cout << "Enter an integer: ";
	cin >> n;
	
	isOdd(n);
	
}
