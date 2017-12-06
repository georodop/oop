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

  cout << "Original string is " << string1 << endl;
  cout << remove(string1, 'a') <<endl;
  //cout << remove(string1, 'g') <<endl;

}

char* remove(const char* str, char ch)
{

  int l = length(str);

  char res[l+1]; //create a table of l+1 characters

  for( int i =0, j = 0; i <= l; i++ )

       if ( str[i] != ch ) 
          {
             res[j] = str[i] ;
             j++;
          }

  return res;  //error: when returning from remove, res out of scope
               //and its space is "discarted" from the stack 


}
