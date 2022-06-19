#include <iostream>
#include <vector>

//Dimunir pra conquistar Soma.

using namespace std;


int DimSoma(vector<vector<int>>& matriz, int i, int j, int soma = 0)
{
	if ((i == matriz.size() - 1) && (j == matriz[0].size() - 1))
	{
		return matriz[i][j] + soma;
	}
	else
	{
		if (j < matriz[0].size() - 1)
			return DimSoma(matriz, i, j + 1, soma + matriz[i][j]);
		else if (i < matriz.size() - 1)
			return DimSoma(matriz, i + 1, 0, soma + matriz[i][j]);
	}
	
	return 0;
}

int main()
{
    vector<vector<int>> matriz = { {1,2,3,4} , {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    cout << DimSoma(matriz, 0,0) << " ";

    return 0;
}
