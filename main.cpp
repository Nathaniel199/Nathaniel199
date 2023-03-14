#include <iostream> 
using namespace std;

int main() 
{
int SpokenNumber;

cout << "Enter a number: ";
cin >> SpokenNumber;

if (SpokenNumber > 0 && SpokenNumber < 99)
{
  cout << SpokenNumber << endl;
}

else if (SpokenNumber < 0)
  {
  cout << "cannot translate";
  }


return 0; 
}