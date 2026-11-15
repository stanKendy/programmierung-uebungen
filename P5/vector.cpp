//
// Created by stanley on 11/11/26.
//
#include "vector.h"
#include <vector>
#include<iostream>
#include<fstream>
int main(int argc, char* argv[]) {
    using namespace std;
    if (argc != 2) {
        cout << "Usage: program <file name>" << endl;
        return 1;
    }
    auto data = readData(argv[1]);
    vector<double> x = data.first;
    vector<double> y = data.second;
    cout <<x.size() << " " <<y.size() << endl;
    summary(x);
    summary(y);
    summary(x,y);
    return 0;
}
