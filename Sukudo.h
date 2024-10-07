#ifndef SUDOKU_H_
#define SUDOKU_H_
#include <vector>
#include <utility>

using namespace std;


// function prototypes ("function declarations")
void read_sudoku(vector<vector<int> >&);
void print_sudoku(const vector<vector<int> >&);

bool test_sudoku(const vector<vector<int> >&);
bool row_1to6(int, const vector<vector<int> >&);

bool col_1to6(int, const vector<vector<int> >&);
bool rect_1to6(int n, const vector<vector<int> >& sud);

void rec_rows_cols(int, vector<int>&, vector<int>&);

vector<pair<int, int>>find_zero(const vector<vector<int> >& sud);
int fill_sudoku(vector<vector<int> >&, const vector<pair<int, int> >&);


#endif
