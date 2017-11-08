#include <iostream>
using namespace std;


double rate(int a, int b){
    return ( (double)(b-a))/((double) b) ;
}

int main(){
    const double minCharge = 1.602E-19;

    int a, b;
	cout << "Enter a positive integer for a: ";
	cin >> a;
	cout << "Enter a positive integer for b: ";
	cin >> b;
	
	cout << rate(a, b) <<" \n";
}