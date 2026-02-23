#include <iostream>
#include <fstream>
#include <array>
using namespace std;

const int numPurchase = 30;

int main(){

    ifstream fin;
    array <string, numPurchase> customers;
    array <int, numPurchase> purchases;

    fin.open("custoers.txt");
    //filling in array with all text file data
    if (fin.good()){
        for (int i = 0; i < numPurchase; i++){
            fin >> purchases[i];
            cin.ignore();
            getline(fin, customers[i]);
        }
        fin.close();
    }
    else
        cout << "file not found.";
    return 0;
}