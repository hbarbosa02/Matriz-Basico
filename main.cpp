#include <iostream>

using namespace std;

int main( int x, int y )
{
    int  i, j, A[3][3], soma = 0, m;
    cout<<"entre com o tamanho da matriz a matriz pode ser no maximo 3x3\n";
    cin>>x;
    cin>>y;

    cout<<"entre com os valores da matriz:\n";
    for(i = 1 ; i <= x ; i++)
    {

        for(j = 1 ; j <= y ; j++)
        {
            cout<<"["<<i<<"]["<<j<<"]=\t";
            cin>>A[i][j];
            soma +=A[i][j];
        }
        cout<<"\n";
    }
    cout<<"Soma de todos os termos da matriz :\n"<<soma<<"\n";

    int menor, maior;

    for(i = 1 ; i <= x ; i++)
    {
        for(j = 1 ; j <= y ; j++)
        {
            if (A[i][j] <= menor) // o erro do menor valor tá ocorrendo aqui na condição.
            {
                menor = A[i][j];
            }
           else
            {
                maior = A[i][j];
            }
        }
    }
    cout<<"\nO maior e o menor valores sao:\nmaior = "<<maior<<"\nmenor = "<<menor<<"\n\n";
    
    int sdp = 0, sds = 0;
    
    if(x == y)
    {
    for(i = 1 ; i <=  x ; i++)
    {
        for(j = 1 ; j <=  y ; j++)
        {
            if (i == j)
            {
                sdp = sdp + A[i][j];
            }
            if (i == 2 && j == 2)         //tá com um erro nessa parte do código em relação a 3x3.
            {
                   if(j == 3-i)
                {
                    sds = sds + A[i][j];
                }
            }
            //    if(j == 2-i)
            // {
               //  sds = sds + A[i][j];
             //}
        }
    }
    }
    else
    {
        cout<<"matriz n e quadrada:\n";
    }
    if (x == y)
    {
       cout<<"soma da diagonal secundaria:"<<sds<<"\n";
       cout<<"soma da diagonal principal:"<<sdp<<"\n";
    }

    int det;
    if (x == 2 && y == 2)
    {
        det = A[1][1] * A[2][2] - A[1][2] * A[2][1];
        cout<<"Determinante da Matriz 2x2 e = "<<det<<"\n";
    }
    if (x == 3 && y == 3)
    {
        det = A[1][1] * A[2][2] * A[3][3] + A[1][2] * A[2][3] * A[3][1] + A[1][3] * A[2][1] * A[3][2] - A[1][3] * A[2][2] * A[3][1] + A[1][1] * A[2][3] * A[3][2] + A[1][2] * A[2][1] * A[3][1];
        cout<<"Determinante da Matriz 3x3 e = "<<det<<"\n";
    }

    int soma1;
    int  n=0;

    cout<<"\nentre com o numero da linha que deseja a soma dos termos\n";
    cin>>n;
    cout<<"\nentre com o numero da coluna que deseja a soma dos termos\n";
    cin>>m;

    if(x == 3 && y == 3)
    {
        soma = A[n][1] + A[n][2] + A[n][3];
        cout<<"Soma da linha da matriz e ="<<soma<<"\n";
        soma1= A[1][m] + A[2][m] + A[3][m];
        cout<<"soma da coluna e ="<<soma1<<"\n";
    }
    else
    {
        soma = A[n][1] + A[n][2] ;
        cout<<"Soma da linha da matriz e ="<<soma<<"\n";
        soma1= A[1][m] + A[2][m];
        cout<<"soma da coluna e ="<<soma1<<"\n";
    }

   return 0;
}

