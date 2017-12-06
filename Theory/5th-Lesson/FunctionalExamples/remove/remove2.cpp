#include <iostream>

using namespace std;


int length(const char* str)
{

  int length;

  for(int i = 0; str[i] != '\0'; i++)
         length = i;

  return length;

}

char* remove(const char*,char);

main()
{

  char* string1 = "abagaadagaga";

  cout << remove(string1, 'a') <<endl;
  cout << remove(string1, 'g') <<endl;

}

char* remove(const char* str, char ch)
{

  int l = length(str);

  char* res = new char[l+1];

  for( int i =0, j = 0; i <= l; i++ )

       if ( str[i] != ch ) 
          {
             res[j] = str[i] ;
             j++;
          }

  return res;

}
