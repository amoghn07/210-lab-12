#include <iostream>
#include <fstream>
#include <array>
using namespace std;

const int numPurchase = 30;

int main(){

    ifstream fin;
    array <string, numPurchase> customers;
    array <int, numPurchase> purchases;

    fin.open("customers.txt");
    if (fin.good()){
        




        fin.close();
    }
    else
        cout << "file not found.";
    return 0;
}