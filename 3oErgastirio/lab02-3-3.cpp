//Ασκ. 3.3
//Κατασκευάστε το πρόγραμμα “lab02-3-3.cpp” στο οποίο θα συνδυάσετε κατάλληλα τα δύο
//προηγούμενα προγράμματα που κατασκευάσατε (3.1 & 3.2) ώστε να συνυπάρχουν αρμονικά.

#include <iostream>
using namespace std;


namespace physics {
	const double minCharge = 1.602E-19;
	int a, b;
	double rate(int a, int b){
	    return ( (double)(b-a))/((double) b) ;
	}
}

namespace banking {
	double a, b;
	double rate(double a, double b){
		const double minCharge = 3;
		return  a+a*(b/101)-minCharge ;
	}
}

int main(){
	char mode;

	cout << "Enter p for physics mode and b for banking mode: ";
	cin >> mode;
	switch(mode){
		case 'p':
			//Wrong approach: using namespace physics;
			cout << "Enter a positive integer for a: ";
			cin >> physics::a;
			cout << "Enter a positive integer for b: ";
			cin >> physics::b;
			cout << physics::rate(physics::a, physics::b) <<" \n";
			break;
		default:
			//Wrong approach: using namespace banking;
			//The problem is I cannot "unuse" a namespace!
			//https://stackoverflow.com/questions/167862/how-can-i-unuse-a-namespace
			cout << "Enter the initial amount: ";
			cin >> banking::a;
			cout << "Enter rate percentage: ";
			cin >> banking::b;

			cout << "Final amount after one year will be: "<< banking::rate(banking::a, banking::b) <<" \n";
	}
}

