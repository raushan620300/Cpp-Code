// #include<iostream>
// using namespace std;

// int main(){
//     float rad;
//     cout<<"\nEnter a radius of the Circle=";
//     cin>>rad;

//     float area,circumference,diameter;
//     area=3.14*rad*rad;
//     circumference=2*3.14*rad;
//     diameter=2*rad;

//     cout<<"\nArea="<<area<<"\nCircumference="<<circumference<<"\nDiameter="<<diameter;

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     float rad;
//     cout<<"\nEnter a radius of the Circle=";
//     cin>>rad;

//     char formula;
//     cout<<"\nChoose a formula:";
//     cin>>formula;

//     switch (formula)
//     {
//     case 'a':
//         cout<<"\nArea="<<3.14*rad*rad;
//         break;
//     case 'c':
//         cout<<"\nCircumference="<<2*3.14*rad;
//         break;
//     case 'd':
//         cout<<"\nDiameter="<<2*rad;
//         break;
    
//     default:
//         cout<<"\nInvalid formula.:)";
//         break;
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"\nInput a number=";
//     cin>>num;

//     int sum=0;
//     for (int i = 1; i <= num; i++)
//     {
//         sum += i;
//     }
//     cout<<"\nSum="<<sum;
//     for (int j = num; j >= 1; j--)
//     {
//         cout<<"\n"<<j;
//     }
    
//      return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout<<"\nEnter a character=";
//     cin>>ch;

//     if (ch>='a' && ch<='z')
//     {
//         cout<<"\nIt`s a character.";
//     }else  if (ch>='A' && ch<='Z')
//     {
//         cout<<"\nIt`s a character.";
//     }else  if (ch>='!' && ch<='*')
//     {
//         cout<<"\nIt`s a symbol.";
//     }else
//     {
//         cout<<"\nIt`s a digit.";
//     }
    
//     return 0;
// }




// #include<iostream>
// using namespace std;

//    int main(){
//       int row,col;               //Here is row=Rows and col=Columns
//         cout<<"\nEnter number of rows=";
//         cin>>row;
//         cout<<"\nEnter number of columns=";
//         cin>>col;

//             for (int i = 1; i <= row; i++)
//             {
//                 for (int j = 1; j <= col; j++)
//                 {
//                     cout<<"*";
//                 }
//                 cout<<"\n";
//             }
            
//       return 0;
//    }




// #include<iostream>
// using namespace std;

//     int main(){
//         int row , col;
//         cout<<"\nEnter number of rows=";
//           cin>>row;
//         cout<<"\nEnter number of rows=";
//           cin>>col;

//             for (int i = 1; i <= row; i++)
//             {
//                 for (int j = 1; j <= col; j++)
//                 {
//                     if (i==1 || i==row)
//                     {
//                         cout<<"*";
//                     }
//                     else if (j==1 || j==col)
//                     {
//                         cout<<"*";
//                     }
//                     else
//                     {
//                         cout<<" ";
//                     }
//                 }
//                 cout<<"\n";
//             }
                
//         return 0;
//     }



// // #include<iostream>
// // using namespace std;
 
// //   int main()
// //   {
// //     int num;
// //     cout<<"\nEnter a number=";
// //      cin>>num;

// //     for (int i = 1; i <= 10; i++)
// //     {
// //         cout<<"\n"<<num<<"*"<<i<<"="<<num*i;
// //     }
   
// //    return 0;
// //   }




// #include<iostream>
// using namespace std;
  
//   int main(){
//     int num;
//     cout<<"\nEnter a number=";
//     cin>>num;

//     int fact=1;
//         for (int i = 1; i <= num; i++)
//         {
//             fact*=i;
//         }
//         cout<<"\nFactorial is="<<fact;

//         for (int j = 1; j <= num; j++)
//         {
//             cout<<"\n"<<j;
//         }
        
//     return 0;
//   }




// #include<iostream>
// using namespace std;

//   int main(){
//      int num;
//      cout<<"\nEnter a number=";
//      cin>>num;

//      int count=0;
//          for (int i = 1; i <= num; i++)
//          {
//             if (num%i == 0)
//             {
//                 count++;
//             }
//         }
//         if (count==2)
//         {
//             cout<<"\nPrime";
//         }else
//         {
//             cout<<"\nNon-Prime";
//         }
        
        
//     return 0;
//   }




     #include<iostream>

       int main(){
          int num1,num2;
            cout<<"\nEnter two numbers=";
            cin>>num1>>num2;

          char op;
            cout<<"\nInput an operator=";
            cin>>op;
      
                switch (op)
                {
                case '+':
                    cout<<num1+num2;
                    cout<<"\nSum is=";
                    break;
                case '-':
                    cout<<num1*num2;
                    cout<<"\nSubtract is=";
                    break;
                case '*':
                    cout<<num1*num2;
                    cout<<"\nProduct is=";
                    break;
                case '/':
                    cout<<num1/num2;
                    cout<<"\nDivide is=";
                    break;
                
                default:
                     cout<<"\nIt`s a default operator:)";
                    break;
                }  
           
        return 0;
       }

  
       
        
      




