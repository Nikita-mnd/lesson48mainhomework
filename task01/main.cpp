#include "logic.h"

int main() {
	cout << "input n: ";
	int n;
	cin >> n;
	int matrix[3][3] = { {2, 4, 6}, 
		{8, 9, 12}, 
		{14, 16, 18} };
	cout <<"even �olumns: "<< even_�olumns(matrix)<<endl; 
	cout << "\nnegative diagonal columns: "  <<endl; 
	negative_diagonal_columns(matrix);
	cout << "\nmax odd sum row: " << endl;
	max_odd_sum_row( matrix);
	cout << "\nmin column: " << endl;
	min_column( matrix, n);
	
	return 0;
}