//
// Created by Morning on 16/9/30.
//

#ifndef HUFFMAN_COMPRESS_H
#define HUFFMAN_COMPRESS_H

#include <map>
#include <vector>

using namespace std;

typedef pair<char,int> PAIR;

class Huffman {
public:
    char* compress(char *str );
    void compute_probaility(char *str);
    void sort_by_probaility(map<char,int> &letter_map);

private:
    static int cmp(const PAIR &x, const PAIR &y);
    vector<PAIR> pair_vec;
};


#endif //HUFFMAN_COMPRESS_H
