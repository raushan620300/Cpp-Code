// #include<iostream>                     //Simple example
// using namespace std;
// int32_t main()
// {
//    int x = 28;
//    int *ptr = &x;

//      cout<<"\n"<<*ptr<<endl;
//      *ptr = 40;
//      cout<<"\n"<<x<<endl;

//  return 0;
// }




// #include<iostream>           //Arithmetic operator
// using namespace std;
// int32_t main()
// {
//     // int x = 10;
//     // int *ptr = &x;
      
//     //   cout<<ptr<<endl;

//     //   ptr++;
//     //   cout<<"\n"<<ptr<<endl;

//       //Now check for character

//       char ch = 'c';
//       char *cptr = &ch;

//         cout<<cptr<<endl;

//          cptr++;
//          cout<<"\n"<<cptr<<endl;
          
//  return 0;
// }




// #include<bits\stdc++.h>            //Pointer and Arrays

// using namespace std;

//   int32_t main(){
       
//        int arr[] = {10,20,30};
//          cout<<*arr<<endl;

//        int *ptr = arr;
//            for (int i = 0; i <= 2; i++)
//            {
//             //    cout<<"\n"<<*ptr<<endl;
//             //    ptr++;
//                   cout<<"\n"<<*(arr+i)<<endl;

//            }
             
//     return 0;
//   }

 


//  #include<bits\stdc++.h>                        //Call by reference

//  using namespace std;

//    void swap(int *a, int *b){
//       int temp = *a;
//       *a = *b;
//       *b = temp;
//    }

//     int32_t main(){

//         int a = 3;   
//         int b = 6;  
          
//         int *aptr = &a;
//         int *bptr = &b;

//             swap(aptr , bptr);

//           cout<<a<< " " <<b<<endl;
             
//              return 0;
//     }




 #include<iostream>
 using namespace std;

 void increment(int x){
    x++;
 }
 
 int32_t main()
 {
    int x = 11;
      increment(x);
      cout<<x<<endl;
  return 0;
 }