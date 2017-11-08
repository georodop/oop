#include <iostream>
using namespace std;


const double minCharge = 3;
double rate(double a, double b){
    return  a+a*(b/100)-minCharge ;
}

int main(){

    double a;
    double b;
	cout << "Enter the initial amount: ";
	cin >> a;
	cout << "Enter rate percentage: ";
	cin >> b;
	
	cout << "Final amount after one year will be: "<< rate(a, b) <<" \n";
}