#include <iostream>
#include <fstream>
#include <numeric>
#include <algorithm>
#include <array>
using namespace std;

const int numPurchase = 30;


int main(){

    ifstream fin;
    array <string, numPurchase> customers;
    array <int, numPurchase> purchases;

    fin.open("customers.txt");
    //filling in array with all text file data
    if (fin.good()){
        for (int i = 0; i < numPurchase; i++){
            fin >> purchases[i];
            fin.ignore();
            getline(fin, customers[i]);
        }
        fin.close();
    }
    else{
        cout << "file not found.";
        return 1;
    }

    cout << "Total customer count for the day: " << customers.size() << endl;
    cout << "Biggest sale: " << *max_element(purchases.begin(), purchases.end()) << endl;
    cout << "Smallest sale: " << *min_element(purchases.begin(), purchases.end()) << endl;
    cout << "Total Revenue: " << accumulate(purchases.begin(), purchases.end(), 0) << endl;

    return 0;
}