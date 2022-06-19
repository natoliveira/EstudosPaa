#include <vector>
#include <iostream>

using namespace std;

int DimEncontra(vector<vector<int>>& matriz, int i, int j, int valor, bool encontrou)
{
	if ((i == matriz.size() - 1) && (j == matriz[0].size() - 1))
	{
		if (encontrou)
			return valor;
		else
			return -1;
	}
	else
	{
		if (matriz[i][j] == valor)
			encontrou = true;
		if (j < matriz[0].size() - 1)
			return DimEncontra(matriz, i, j + 1, valor, encontrou);
		else if (i < matriz.size() - 1)
			return DimEncontra(matriz, i + 1, 0, valor, encontrou);
	}
	
	return 0;
}

int main()
{
    int valor = 6;
    vector<vector<int>> matriz = { {1,2,3,4} , {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    cout << DimEncontra(matriz, 0,3,0,3) << " ";

    return 0;
}

