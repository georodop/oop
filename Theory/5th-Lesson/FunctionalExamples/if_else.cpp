#include <iostream>

using namespace std;

main()
{

  int a,b;

  b=1;
//--b = Decrement b by 1, then use the new value of b in the expression in which b resides.
// condition ? result_if_true : result_if_false
  cout << ((a = --b) ? b : (b = -99 )) << '\n' << " a is  " << a << '\n' <<
       " b is " << b << endl;

  b=1;
// a = --b ? b : (b = -99 ) is equivalent to a = (--b ? b : (b = -99)) due to operator priority
  cout << (a = --b ? b : (b = -99 )) << '\n' << " a is  " << a << '\n' <<
       " b is " << b << endl;
}
