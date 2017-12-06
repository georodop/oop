/*
2ο-(3ο) Εργαστήριο, Ασκ. 3.4
Έστω ότι το πρόγραμμα σας χρησιμοποιεί μια μεταβλητή με όνομα time τύπου int. Ορίστε την και
εκτυπώστε την τιμή της. Επίσης έστω ότι το πρόγραμμα σας θέλει να εκτυπώνει την τρέχουσα
χρονική στιγμή (θυμηθείτε την συνάρτηση time). Τροποποιήστε το πρόγραμμα σας καταλλήλως.
*/
//Remember that you cannot declare a namespace inside a function
//and you cannot do "using namespace" and then undo this...

#include <iostream>
#include <ctime>
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


namespace realtime {
	time_t time ;
}
namespace spectime {
	int time = 10; //Just testing if I can use the name
}

int main(){
	realtime::time = time(NULL);
	
	cout << "Value of the variable time is: "<< spectime::time <<"\n ";
	cout << "Value returned by the time function is: "<< realtime::time <<"\n ";
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

