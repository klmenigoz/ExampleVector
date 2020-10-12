#include <iostream>
#include <vector>
using namespace std;

//function prototype
void printVector (vector <double> );

int main()
{
  vector <double> receipts;
  double additional;

  do{
    cout << "There are " << receipts.size() << " purchases.\n";

    //function call 
    printVector (receipts);

    cout << "Enter new purchase (or -1 to quit):\n";
    cin >> additional;

    if( additional >= 0 )
    {
      receipts.push_back( additional );
    }
  }while( additional >= 0 );
  
  return 0;
}

void printVector( vector <double> list)
  {
    for (int index = 0; index < list.size(); index++)
    {
      cout<< list[index]<<endl;
    }
  }