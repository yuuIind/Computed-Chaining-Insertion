#include "computed_chaining.h"
#include<iostream>
using namespace std;

int main(){
    int keys[7] = {19,90,55,11,76,65,30}
  
    ComputedChaining chain(7);
    
    for(int i=0; i<7; i++){
        chain.insert(keys[i]);
    }
  
    chain.print();
  return 0;
}
