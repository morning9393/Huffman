#include <iostream>
#include "Huffman.h"

using namespace std;

int main() {
    Huffman huffman;
    huffman.compress("hello");
    
//    cout << huffman.compress((char *) "hahaha") << endl;
    return 0;
}