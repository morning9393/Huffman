//
// Created by Morning on 2016-10-20.
//

#ifndef HUFFMAN_NODE_H
#define HUFFMAN_NODE_H


struct Node {
public:
    Node(char key, int count, char value, Node *left, Node *right, Node *parent) {
        this->key = key;
        this->count = count;
        this->left = left;
        this->right = right;
        this->parent = parent;
        this->value = value;
    }

    Node *left;
    Node *right;
    Node *parent;
    int count;
    char value;
    char key;
};


#endif //HUFFMAN_NODE_H
