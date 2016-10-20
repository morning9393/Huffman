//
// Created by Morning on 16/9/30.
//

#include <iostream>
#include <algorithm>
#include "Huffman.h"

char *Huffman::compress(char *str) {
    compute_probaility(str);

//    vector<Node*>::iterator it = vec_node.begin();
    map<char,Node*>::iterator it = map_node.begin();
    while(it != map_node.end()){
        cout<<"key: " << it->second->key << " count: " << it->second->count<<endl;
        it++;
    }
    return str;
}

void Huffman::compute_probaility(char *str) {
    while (*str) {
        if (map_node[*str] == nullptr) {
            Node node(*str, 1, nullptr, nullptr, nullptr);
            map_node[*str] = &node;
            vec_node.insert(vec_node.begin(),&node);
        } else {
            map_node[*str]->count++;
        }
        str++;
    }
    sort(vec_node.begin(), vec_node.end(), cmp);
}

int Huffman::cmp(const Node *x, const Node *y) {
    return x->count < y->count;
}







