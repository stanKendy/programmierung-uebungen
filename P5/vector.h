//
// Created by stanley on 11/11/26.
//
#include <vector>
#ifndef FIRST_PROJECT_VECTOR_H
#define FIRST_PROJECT_VECTOR_H
double sum(const std::vector<double> &v);
double mean(const std::vector<double> &v);
double variance(const std::vector<double> &v);
double standard_deviation(const std::vector<double> &v);
double aad(const std::vector<double> &v);
void summary(const std::vector<double> &v);
double covariance (const std::vector<double> &x, const std::vector<double> &y);
double correlation(const std::vector<double> &x, const std::vector<double> &y);
void summary(const std::vector<double> &x, const std::vector<double> &y);
std::pair<std::vector<double>, std::vector<double>> readData(const char *filename);
std::pair<double, double> lm(const std::vector<double> &x, const std::vector<double> &y);
#endif //FIRST_PROJECT_VECTOR_H
