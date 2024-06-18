#include<iostream>
using namespace std;
  
  int main(int argc, char const *argv[])
  {
    int num;
    cout<<"Enter a no.:";
    cin>>num;
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout<<"Factorial: "<<fact<<endl;
    return 0;
  }
  