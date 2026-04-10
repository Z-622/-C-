#include <iostream>
#include <vector>
using namespace std;

vector<int> getDiagonal(const vector<vector<int>>& matrix) {
    vector<int> diagonal;
    for (size_t i = 0; i < matrix.size(); ++i) {
        diagonal.push_back(matrix[i][i]);
    }
    return diagonal;
}

int main() {
    vector<vector<int>> matrix{
        {0,1,2,3,4},
        {1,2,3,4,5},
        {2,3,4,5,6},
        {3,4,5,6,7},
        {4,5,6,7,8}
    };

    vector<int> diagonal = getDiagonal(matrix);

    for (auto e : diagonal) {
        cout << e << endl;
    }

    return 0;
}