#include<iostream>
#include <list>
using namespace std;

class ComputedChaining {
  
  private:
      int size;
      list<int> *table;
  
  public:
      ComputedChaining(int size) {
          this->size = size;
          table = new list<int>[this->size];
      }
      int hashFunction(int key);
      void insert(int key);
      void print();
};

int ComputedChaining::hashFunction(int key) {

}

void ComputedChaining::insert(int key) {

}

void ComputedChaining::print() {

}
