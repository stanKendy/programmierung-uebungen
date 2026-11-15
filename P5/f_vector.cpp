//
// Created by stanley on 11/11/26.
//....
#include<vector>
#include<fstream>
#include <iostream>
#include<utility>
#include<cmath>
std::pair<std::vector<double>, std::vector<double>> readData(const char *filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Cannot open file" << std::endl;
    }
    std::vector<double> x;
    std::vector<double> y;
    double a,b;
    while (file >> a >> b){
        x.push_back(a);
        y.push_back(b);
    }
    return{x,y};
}

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

double covariance (const std::vector<double> &x, const std::vector<double> &y) {
    double s = 0;
    for (int i = 0; i < x.size(); i++) {
        double a =( x[i] - mean(x));
        double b =( y[i] - mean(y));
        double c = a * b;
        s = s + c;
    }
    double k = s / static_cast<double>(x.size()-1);
    return k;
}
double correlation(const std::vector<double> &x, const std::vector<double> &y) {
    double k = covariance(x, y);
    double X =standard_deviation(x);
    double Y =standard_deviation(y);
    double correlation =k /(X*Y);
    return correlation;
}

std::pair<double, double> lm(const std::vector<double> &x, const std::vector<double> &y) {
    double k = correlation(x,y)*standard_deviation((y))/standard_deviation(x);
    double d = mean(y)-k*mean(x);
    return {k,d};
}

void summary(const std::vector<double> &x, const std::vector<double> &y) {
    std::cout <<"The covariance = "<<covariance(x, y) << std::endl;

    std::cout <<"The correlation = "<<correlation(x, y) << std::endl;
    std::pair<double, double> result = lm(x,y);
    double k = result.first;
    double d = result.second;
    std::cout <<"Regression = "<<k<<" * x "<<d<< std::endl;
}

