#include<bits\stdc++.h>
using namespace std;
 
 int simple_interest(float principal, float rate, float time) {
      return  principal * rate * time / 100; 
 }
 int checkPrimeorNonPrime(int num){

           int count = 0;
         for(int i = 1; i <= num; i++){
                if(num % i == 0){
                    count++;
                }
         }
         if (count == 2)
         {
            cout<<"\nPrime number";
         }else
         {
            cout<<"\nNot prime number";
         }
          
          return count;
 }           


 int calculator(float num_1, float num_2,char op) {
    
        switch (op)
        {
        case '+':
            cout<<"\nAddition="<<num_1+num_2<<endl;
            break;
        case '-':
            cout<<"\nSubtraction="<<num_1-num_2<<endl;
            break;
        case '*':
            cout<<"\nMultiplication="<<num_1*num_2<<endl;
            break;
        case '/':
            cout<<"\nDivision="<<num_1/num_2<<endl;
            break;
        
        default:
            cout<<"\nInvalid operator";
            break;
        }
        return op;
 }


   int findOddorEven(int n) {
           
        if (n%2 == 0)
        {
            cout<<"Even";
        }
        else{
            cout<<"Odd";
        }
         return 0;
    }

    void findVowelorConsonant(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout<<"\nIt`s a lowercase Vowel";
        }else if (ch == 'A' || ch == 'E' || ch == 'I' || ch =='O' || ch =='U')
        {
            cout<<"\nIt`s a uppercase Vowel";
        }else
        {
            cout<<"\nIt`s a Consonant";
        }
        
    }


  int32_t main() {
       
    //    //This code about on Calculator
    //    float num_1 ,num_2;
    //      cout<<"\nEnter a first value";
    //        cin >> num_1;
    //      cout<<"\nEnter a second value";
    //        cin >> num_2;

    //     char op;
    //        cout<<"\nInput an operator=";
    //          cin>>op;

    //          calculator(num_1,num_2,op); 

    //   //     //This code about on find Even or Odd number
    //       int num;
    //          cout<<"\nEnter a number by user=";
    //            cin>>num;

    //         findOddorEven(num);

    //       //This code about on find the number is Prime or not
    //       int number;
    //         cout<<"\nEnter a number by user=";
    //           cin>>number;

    //           checkPrimeorNonPrime(number);

    //           //This code about on find Simple Interest
    //           float principal,rate,time;  
    //             cout<<"\nInput Interst=";
    //               cin>>principal;
    //             cout<<"\nInput Rate=";
    //               cin>>rate;
    //             cout<<"\nInput Time=";
    //               cin>>time;
                
    //                 cout<<"\nSimple Interst is:"<<simple_interest(principal,rate,time);

                //Here, we will find which is vowel or consonant.
                char ch;
                  cout<<"\nEnter a character=";
                    cin>>ch;

                    cout<<"\n"<<findVowelorConsonant;
    return 0;
  }