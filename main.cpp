#include <iostream>
#include <vector>
using namespace std;

//function prototype
void printVector (vector <double> );
double sumOfVector( vector <double> );
double findBiggest (vector <double> );
int main()
{
  vector <double> receipts;
  double additional;
  double total;
 
  do{
    cout << "There are " << receipts.size() << " purchases.\n";
    cout<< "For a subtotal of: "<< sumOfVector(receipts) << endl;
    //function call 
    printVector (receipts);

    cout << "Enter new purchase (or -1 to quit):\n";
    cin >> additional;

    if( additional >= 0 )
    {
      receipts.push_back( additional );
    }
  }while( additional >= 0 );
  
  cout<< "Thank you, you have purchases:\n";
  printVector(receipts);
  total = sumOfVector(receipts);
  cout<<"Your total expenses are: "<< total;
  return 0;
}


//function definition
//return type, function name, (parameters)
void printVector( vector <double> list)
  {
    for (int index = 0; index < list.size(); index++)
    {
      cout<< list[index]<<endl;
    }
  }

//function definition
double sumOfVector( vector <double> sum )
  {
    double total =0;
    for (int index = 0; index < sum.size(); index++)
    {
      total += sum[index];  //total = total[@ location] + sum
    }
    return total;
  }

  //find findBiggest
 // double findBiggest (vector <double> numbers)
 //  {
  //   if (numbers [index] > biggest )
     //class end boo didnt get last part but can prolly make work :)

