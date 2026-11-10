#include "statistik.h"
#include <cmath>
#include <vector>
//
// Created by stanley on 11/10/26.
//
#include<iostream>
double sum(const std::vector<double> &v) {
    double s = 0.0;
    for (double x : v) {
        s = s + x;
    }
    return s;
}

double mean(const std::vector<double> &v) {
    double s;
    s = sum(v);
    double m = s / static_cast<double>(v.size());
    return m;
}
double variance(const std::vector<double> &v) {
    double m = mean(v);
    double va = 0.0;
    for (double x : v) {
        double ecart = x -m;
         va += ecart*ecart;
    }
    return va / (static_cast<double>(v.size())- 1);
}
double standard_deviation(const std::vector<double> &v) {
    double s = variance(v);
    return sqrt(s);
}
double aad(const std::vector<double> &v) {
    double m = mean(v);
    double va = 0.0;
    for (double x : v) {
        double ecart = x -m;
        double a = ecart*ecart;
        double b =sqrt(a);
        va += b;
    }
    return va / static_cast<double>(v.size());
}
void summary(const std::vector<double> &v) {
    using namespace std;
    cout <<"Count = "<<v.size() <<endl;
    cout <<"Sum = "<<sum(v) << endl;
    cout <<"Mean = "<<mean(v) << endl;
    cout <<"Variance = "<<variance(v) << endl;
    cout <<"Standard Deviation = "<<standard_deviation(v) << endl;
    cout <<"AAD = "<<aad(v) << endl;
}

double correlation(const std::vector<double> &x, const std::vector<double> &y) {
    double X =standard_deviation(x);
    double Y =standard_deviation(y);
    double s = 0;
    for (int i = 0; i < x.size(); i++) {
        double a =( x[i] - mean(x));
        double b =( y[i] - mean(y));
        double c = a * b;
        s = s + c;
    }

    double k = s / (static_cast<double>(x.size())- 1);
    double correlation =k /(X*Y);
    return correlation;
}