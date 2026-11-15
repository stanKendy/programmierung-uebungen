//
// Created by stanley on 11/10/26.
//

#ifndef FIRST_PROJECT_STATISTIK_H
#define FIRST_PROJECT_STATISTIK_H
#include <vector>

double sum(const std::vector<double> &v);
double mean(const std::vector<double> &v);
double variance(const std::vector<double> &v);
double standard_deviation(const std::vector<double> &v);
double aad(const std::vector<double> &v);
void summary(const std::vector<double> &v);
double covariance (const std::vector<double> &x, const std::vector<double> &y);
double correlation(const std::vector<double> &x, const std::vector<double> &y);
void summary(const std::vector<double> &x, const std::vector<double> &y);
#endif //FIRST_PROJECT_STATISTIK_H