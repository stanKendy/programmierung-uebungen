//
// Created by stanley on 11/10/26.
//

#include "statistik.h"
#include <vector>
#include<iostream>
int main() {
    using namespace std;
    vector<double> a;
    vector<double> b;
    int n;
    int m;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        double valeur;
        cin >> valeur;
        a.push_back(valeur);
    }
    cout <<"Enter number of elemets for the second vector: ";
    cin >> m;
    for (int i = 0; i < m; i++) {
        double Valeur;
        cin >> Valeur;
        b.push_back(Valeur);
    }
    cout <<"Summary for your first vector: "<<endl;
    summary(a);
    cout <<"Summary for your second vector: "<<endl;
    summary(b);
    if (n == m)
    {

        summary(a,b);
    }
    else {
        cout <<"Both Vectors muss have the same number of elements to calcule the correlation";
        return 1;
    }
    return 0;
}