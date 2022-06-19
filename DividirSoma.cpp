#include <vector>
#include <iostream>

//Dividir pra conquistar soma
using namespace std;

 int Soma (vector<vector<int>>& matriz, int linhai, int linhaf, int colunai, int colunaf){
 if ((linhaf - linhai) == 0 && (colunaf - colunai) == 0)
 return matriz[linhai][colunai];
 
 else {
     
     int divlinha = (linhai + linhaf) / 2;
     int divcoluna = (colunai + colunaf) / 2;
     int matriz1 = Soma(matriz, linhai, divlinha, colunai, divcoluna);
     int matriz2 = Soma(matriz, linhai, divlinha, divcoluna + 1, colunaf);
     int matriz3 = Soma(matriz, divlinha + 1, linhaf, colunai, divcoluna);
     int matriz4 = Soma(matriz, divlinha + 1, linhaf, divcoluna + 1, colunaf);
     return matriz1 + matriz2 + matriz3 + matriz4;
 
 }

 }

int main()
{   
    vector<vector<int>> matriz = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13, 14, 15, 16}};
    cout << Soma << " ";

    return 0;
}