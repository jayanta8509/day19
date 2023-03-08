// Write a program to identify if the number is Armstrong number or not
#include <iostream>
using namespace std;
void Armstrong(int a) {
  int b = a;
  int kl = 0;
  int k;
  while (a != 0) {
    k = a % 10;
    kl += k * k * k;
    a /= 10;
  }
  if (b == kl) {
    cout << "Armstrong number" << endl;
  } else {
    cout << " Not Armstrong number" << endl;
  }
}

int main() {
  int a = 153;
  Armstrong(a);
}