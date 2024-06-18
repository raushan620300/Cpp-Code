#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

      cout<<n<<"\nFactorial is:"<<fact(n);
 return 0;
}

int fact(int n){
    int fact=1;
      for (int i = 1; i <= n; i++)
      {
         fact=fact*i;
      }
      return fact;5
}