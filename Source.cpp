#include <iostream>
#include <vector>
using namespace std;

int min(vector < vector<int >>& matrix)
{
	int  min;

	min = matrix[0][0];
	for (unsigned row = 0; row < matrix.size(); row++) {
		for (unsigned cloume = 0; cloume < matrix[row].size(); cloume++) {

			if (matrix[row][cloume] < min)
				min = matrix[row][cloume];
		}

	}
	return min;
}

int main()
{
	vector< vector<int> > matrix(4);

	for (unsigned int i = 0; i < 4; i++)
		matrix[i] = vector<int>(3);
	int x;
	for (unsigned row = 0; row <4; row++) {
		for (unsigned cloume = 0; cloume < 3; cloume++) {

			cin >> x;
			matrix[row][cloume]=x;
		}

	}

	cout << "min: " << min(matrix) << endl;

	system("pause");

}