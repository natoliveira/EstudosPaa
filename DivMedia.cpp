#include <vector> 
#include <iostream>

using namespace std;
int DivMedia(vector<vector<int>>& matriz, int linha_ini, int linha_fim, int col_ini, int col_fim, int& elemento, int soma = 0)
{
	if ((linha_fim - linha_ini) == 0 && (col_fim - col_ini) == 0)
	{
		elemento++;
		return matriz[linha_ini][col_ini];
	}
	else
	{
		int div_linha = (linha_ini + linha_fim) / 2;
		int div_col = (col_ini + col_fim) / 2;
		soma += DivMedia(matriz, linha_ini, div_linha, col_ini, div_col, elemento);
		soma += DivMedia(matriz, linha_ini, div_linha, div_col + 1, col_fim, elemento);
		soma += DivMedia(matriz, div_linha + 1, linha_fim, col_ini, div_col, elemento);
		soma += DivMedia(matriz, div_linha + 1, linha_fim, div_col + 1, col_fim, elemento);
		return soma / matriz.size();
	}
}

int main()
{
    int valor = 6;
    vector<vector<int>> matriz = {{1,2,3,4} , {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    cout << DivMedia << " ";

    return 0;
}
#include <vector> 
#include <iostream>

using namespace std;
int DivMedia(vector<vector<int>>& matriz, int linha_ini, int linha_fim, int col_ini, int col_fim, int& elemento, int soma = 0)
{
	if ((linha_fim - linha_ini) == 0 && (col_fim - col_ini) == 0)
	{
		elemento++;
		return matriz[linha_ini][col_ini];
	}
	else
	{
		int div_linha = (linha_ini + linha_fim) / 2;
		int div_col = (col_ini + col_fim) / 2;
		soma += DivMedia(matriz, linha_ini, div_linha, col_ini, div_col, elemento);
		soma += DivMedia(matriz, linha_ini, div_linha, div_col + 1, col_fim, elemento);
		soma += DivMedia(matriz, div_linha + 1, linha_fim, col_ini, div_col, elemento);
		soma += DivMedia(matriz, div_linha + 1, linha_fim, div_col + 1, col_fim, elemento);
		return soma / matriz.size();
	}
}

int main()
{
    int valor = 6;
    vector<vector<int>> matriz = {{1,2,3,4} , {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    cout << DivMedia << " ";

    return 0;
}
