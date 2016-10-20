//
// Created by Morning on 16/9/30.
//

#ifndef HUFFMAN_COMPRESS_H
#define HUFFMAN_COMPRESS_H

#include <map>
#include <vector>
#include "Node.h"

using namespace std;

typedef pair<char,int> PAIR;

class Huffman {
public:
    char* compress(char *str );
    void compute_probaility(char *str);

private:
    static int cmp(const Node *x, const Node *y);
    map<char,Node*> map_node;
    vector<Node*> vec_node;
};


#endif //HUFFMAN_COMPRESS_H
