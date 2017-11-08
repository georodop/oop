//Άσκηση 1.3
//Κατασκευάστε το πρόγραμμα primes.cc το οποίο θα δέχεται ως είσοδο έναν ακέραιο και
//i. θα βρίσκει όλους τους πρώτους αριθμούς μέχρι τον συγκεκριμένο ακέραιο και θα τους
//γράφει σε έναν μονοδιάστατο πίνακα.
//ii. θα γράφει σε έναν δεύτερο μονοδιάστατο πίνακα τους περιττούς πρώτους αριθμούς που
//έχει βρεί και
//iii. θα γράφει σε έναν τρίτο μονοδιάστατο πίνακα τους άρτιους πρώτους αριθμούς.
//iv. θα εκτυπώνει τους πίνακες με τα στοιχεία του κάθε πίνακα χωρισμένα με στηλογνώμονα
//(tab).

//i. Χρειάζομαι μια λούπα που θα ξεκινάει από το 1 και θα φτάνει μέχρι τον ακέραιο που δόθηκε σαν είσοδος
//ελέγχοντας για κάθε έναν αριθμό αν είναι πρώτος ή όχι (χρησιμοποιώντας την isNotPrime)


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

bool isPrime(int n){
	return ( !isNotPrime(n) );
}


int main(){
	int *allPrimes;
	int max = 1; 
	
	while(true) {
		cout << "Enter a positive integer (or 0 to quit): ";
		cin >> max;
		if (max==0) {
			return 0;
		}
		for(int i=2; i<=max; i++ ){
			isPrime(i);
			
		}
	}	
}