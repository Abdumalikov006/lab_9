#include <iostream>
using namespace std;
//problem 1
// int multiply(int a, int b) {

//     if (b == 0)
//         return 0;

//     if (b < 0)
//         return -multiply(a, -b);
//     return a + multiply(a, b - 1);
// }
//problem 2
// int factorial(int n) {
//     if (n <= 1) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
//problem 3
// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
//}
//problem 4
// int sum(int n){
//     if (n == 0) {
//         return 0;
//     }
//     return n + sum(n - 1);
// }
//problem 5
// int desc(int n) {
//     if (n == 1) return 1;
//     cout << n << " ";
//     return desc(n - 1);
// }
//problem 6
// int num_count(int num) {
//     if (num == 0) {
//         return 0;
//     }
//     else {
//         return 1+num_count(num/10);
//     }
//
// }
//problem 7
// int digit_sum(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n%10+digit_sum(n/10);
//
// }
//problem 8
// int power(int x, int y) {
//     if (y == 0) {
//         return 1;
//     }
//     return x * power(x, y - 1);
// }
//problem 9
// void reverse(int n) {
//     if (n == 0) return ;
//     cout<<n%10;
//     reverse(n/10);
//
// }
//problem 10
// int reverseHelper(int n,int rev){
//     if(n==0) return rev;
//     return reverseHelper(n/10,rev*10+(n%10));
// }
//
// int reverseNumber(int n){
// return reverseHelper(n,0);}
//
// bool palindrome(int n){
// return n==reverseNumber(n);}

    //problem 11
// bool isPrime(int n,int i=3){
//     if(n==1){
//     return false;
//     }
// if(n==2){
// return true;}
// if(n%2==0){
// return false;}
// if (n==i){
// return true;}
// if(n%i==0){
// return false;}
//  return isPrime(n,i+1);
//     }


int main() {
    //problem1
    // int num1, num2;
    // cout << "Enter two numbers: ";
    // cin >> num1 >> num2;
    //
    // int result = multiply(num1, num2);
    // cout << "Product: " << result << endl;
    //
    // return 0;
    //prolem 2
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // cout <<"Factorial of "<<n<<" is "<< factorial(n);
    // return 0;
    //problem 3
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // cout<<"Fibonacci number is: "<<fibonacci(n)<<endl;
    //problem 4
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // cout<<"sum of numbers from 1 to "<<n<<" is: "<<sum(n)<<endl;
    // return 0;
    //prolbem 5
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // cout<<desc(n)<<endl;
    // return 0;
    //problem 6
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << "There is "<<num_count(num)<< "numbers in "<<num<<endl;
    // return 0;
    //problem 7
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<"Sum of digits in " <<n<< " is: "<<digit_sum(n)<<endl;
    // return 0;
    //problem 8
    // int x, y;
    // cout << "Please enter two integers:" << endl;
    // cin >> x >> y;
    // cout <<y<<" power of "<< x<< " is "<< power(x, y) << endl;
    // return 0;
    //problem 9
    // int n;
    // cout<<"Enter a number: ";
    // cin >> n;
    // cout << "Reversed version of this number is ";
    // reverse(n);
    // return 0;
    //problem 10
// int n;
// cin>>n;
// if (palindrome(n)) {
// cout<<"palindrome";}
// else {
// cout<<"not palindrome";}
// return 0;
//problem 11
// int n;
// cin>>n;
// if(isPrime(n)){
// cout<<"Prime";}
// else{
// cout<<"Not prime";}
// return 0;


}