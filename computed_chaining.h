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
    return key % this->size;
}

void ComputedChaining::insert(int key) {
    table[hashFunction(key)].push_back(key);
}

void ComputedChaining::print() {
    for(int i = 0; i < this->size; i++){
        cout << i;
        if(!(table[i].empty())){
            for(list<int>::iterator listIterator = table[i].begin(); listIterator != table[i].end(); listIterator++){
                cout << " --> " << *listIterator;
            }
        }
        cout << endl;
    }
}