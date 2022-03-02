#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main()
{
	int matA[2] [2], matB[2] [2], matC[2][2];
	int i, j, m, n, p, q, k, jumlah;

cout<<"\tProgram Perkalian Matriks";
cout<<"\n-------------------------------------------\n";
cout<<"Masukkan banyaknya baris Matriks A: "; cin >> m;
cout<<"Masukkan banyaknya kolom Matriks A: "; cin >> n;
cout<<"Masukkan banyaknya baris Matriks B: "; cin >> p;
cout<<"Masukkan banyaknya kolom Matriks B: "; cin >> q;

//menampilkan elemen matriks A
cout<<endl;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
cout<<"Elemen Matriks A[" << i << "," << j << "] = ";
cin>>matA[i][j];
    }
  	}

//menampilkan elemen matriks B
cout<<endl;
	for(i = 0; i < m; i++){
    	for(j = 0; j < n; j++){
cout<<"Elemen Matriks B[" << i << "," << j << "] = ";
cin>>matB[i][j];
    }
	}

//menampilkan matriks A
cout<<endl;
cout<<"Matriks A"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
	cout<<matA [i][j]<<" ";
	}
cout<<endl;
	}

//menampilkan matriks B
cout<<"Matriks B"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
	cout<<matB [i][j]<<" ";
	}
cout<<endl;
	}

//menghitung perkalian matriks A dengan matriks B
cout<<endl;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
    matC[i][j]=0;
    for(k=0; k<2; k++){
    jumlah = matA[i][k] * matB[k][j];
    matC[i][j] = matC[i][j] + jumlah;
    }
	}
	}

//menampilkan matriks C hasil perkalian
cout<<"\tMatriks A * Matriks B = Matriks C"<<endl;
cout<<"Matriks C"<<endl;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
        cout<<matC[i][j] <<" ";
	}
cout<<endl;
	}

  return 0;
}
