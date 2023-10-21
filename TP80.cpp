#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarVector(int n);
int DistanciaDeHamming(vector<int> a, vector<int> b);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> A;
    vector<int> B;
    srand(time(NULL));
    int N, dis;
    cout<<"Ingrese cantidad para el vector: ";
    cin>>N;
    A = GenerarVector(N);
    B = GenerarVector(N);
    MostrarVector(A);
    MostrarVector(B);
    dis = DistanciaDeHamming(A, B);
    cout<<"La Distancia de Hamming es de: "<<dis<<endl;
    return 0;
}

vector<int> GenerarVector(int n)
{
    vector<int> V;
    int e;
    for (int i = 0; i < n; i++)
    {
        e = rand() % 2;
        V.push_back(e);
    }
    return V;
}

int DistanciaDeHamming(vector<int> a, vector<int> b)
{
    int dis = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] != b[j])
            {
            	dis++;
            }
            i++;
        }
    }
    return dis;
}

void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}