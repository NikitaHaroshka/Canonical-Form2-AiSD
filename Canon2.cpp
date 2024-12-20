#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n;
    fin >> n;
    vector<int> vect(n, 0);
    vector<vector<int>> ma(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fin >> ma[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ma[i][j] == 1) {
                vect[j] = i + 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        fout << vect[i] << " ";
    }

    fin.close();
    fout.close();

    return 0;
}