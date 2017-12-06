//ΕΡΓΑΣΤΗΡΙΟ 3:
//Αντικειμενοστραφής προγραμματισμός – Κλάσεις - const member functions – this –  constructors
//Άσκηση 1 – Κλάσεις - const member functions – mutators – accessors
//1.1   
//  Ορίστε μία “struct” που θα αναπαριστά την έννοια του σημείου στο δισδιάστατο χώρο και μία
//  “class” για την έννοια του τριγώνου (μπορείτε να χρησιμοποιήσετε ένα ή περισσότερα αρχεία).
//  Σε μια ενδεικτική main δημιουργήστε μερικά αντικείμενα των παραπάνω τύπων.

//struct vs class
//struct:   default is public members,  doesn't declare constr/destruc.
//class:    default is private members, declares constructor/destructor

//The following two classes are absolutely equivalent in every way except their name:
/*
struct Foo
{
   int x;
};

class Bar
{
public:
   int x;
};
*/
//Question: Can I have a class and a struct with the same name ?
//Answer: No! Identifiers in the same namespace should be unique.



#include <iostream>

//using namespace std;
using std::cout;
//To παραπάνω χρησιμοποιεί το std μόνο για το cout.
struct point{
    //void set(const double& x=0, const double& y=0);
    
    //Επειδή by default είναι public τα μέλη της κλάσης κάνω private τις μεταβλητές 
    //ώστε να είναι πιο ελεγχόμενη η πρόσβαση σε αυτές μέσω των μεθόδων που θα ορίσω.#
    
//private:
        double x=0, y=0;
    //
};
class triangle {
    point a, b, c;
};

int main(void){
    
    point a , b , c;
    a.x = 1.3;
    a.y = 2.1;
    
    b.x=0.9;
    b.y=2.0;
    
    c.x=0.5;
    c.y=2.3;
    
    
    cout<<"a=("<<a.x<<","<<a.y<<")"<<"\n";
    
    triangle t1;
    
    t1.a= a;
    t1.b= b;
    t1.c= c;
    
    
    
return 0;    
}