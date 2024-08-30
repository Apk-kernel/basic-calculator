#include <iostream>
#include <cmath>
int main(){
using namespace std;
  double num1;
  double num2;
  char operation;
  cout<<"Enter a number: ";
  cin>>num1;
  cout<<"Enter another number: ";
  cin>>num2;
  cout<<"enter operation + - * / ";
  cin>>operation;
  switch(operation){
    case '+':
      cout<<num1+num2;
      break;
    case '-':
      cout<<num1-num2;
      break;
    case '*':
      cout<<num1*num2;
      break;
    case '/':
      cout<<(num1)/(num2);
      break;
    default:
      cout<<"Enter valid operation";}
  return 0;
}
