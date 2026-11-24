//
// Created by stanley on 11/15/26.
//

#include <iostream>
#include <fstream>
#include <map>
#include <string>
int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout <<"Usage: ./Map <filename>"<<std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file) {
        std::cout <<"Error opening file"<<std::endl;
        return 1;
    }

    std::map<std::string, double> sums;
    std::map<std::string, double>counts;
    std::string category;
    double value;
    while (file >> category >> value) {
        sums[category] += value;
        counts[category]+= 1;
    }
    for (const auto &entry : sums) {
        double mean = entry.second/counts.at(entry.first);
        std::cout <<entry.first << " " <<mean << std::endl;
    }
    return 0;
}