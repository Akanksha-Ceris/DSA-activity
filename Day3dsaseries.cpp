// #include<iostream>
// using namespace std;
// int main(){
// int n =45;
//  if(n>= 46){
//     cout<<"n is positive\n";
//  }
// else{
//     cout<<"n is negative number";
// }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    // int age;
    // cout<<"enter your age";
    // cin>>age;
    // if(age>= 18){
    //     cout<<"you can vote";
        
    // }else{
    //     cout<<"you can not vote";
    // }
    // int n;
    // cout<<"enter a number:";
    // cin>>n;
    // if(n%2 == 0){
    //     cout<<"Entered number is even";

    // }else{
    //     cout<<"Entered number is odd";
        
    // }

    // int marks;
    // cout<<"enter marks:";
    // cin>>marks;
    // if(marks>=90){
    //     cout<<"grade is A";}
    //     else if(marks>=80 && marks<90){
    //         cout<<"Grade is B";}
    //         else{
    //             cout<<"Grade is c";
    //         }
    //     int n = 50 ;
    //     int sum = 0;
    //     for( int i =1; i <=n; i++){
    //         sum += i;
    //         if(i == 5){
    //             break;
    //         }
    //     }
    // cout<<"sum = "<<sum<<endl;

    // int n =50;
    // int oddsum = 0;
    // //print odd numers
    // for(int i =1;i<=n; i++){
    //     if(i%2 != 0){
    //      oddsum +=i;

    //     }
    // }
    // cout<<"sum:" <<oddsum;

// //Q.1.  check the number is prime or not
// int n = 7;
// bool isPrime = true;
// for(int i = 2; i*i <=n; i++){
//     if(n%i == 0){//non prime number
//     isPrime = false;

// break;}}
// if(isPrime == true){
//     cout<<"prime no";

// }else {
//     cout<<"non Prime number";
// }

// star printing question using nested loop

for(int i = 1;i<=5; i++){//lene 1 to n
    int m = 5;
    for(int j =1; j<=m; j++){
        cout<<"*";
    }
}
    cout<<endl;
    return 0;
}
