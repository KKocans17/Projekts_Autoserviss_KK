#include <iostream>
#include <fstream>
#include <ctime>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
       int vsk;
       int uzsk;
       fstream file;
       string filename;
       string vardi3;
       string vardi_2;
       string uzvardi_2;
       string produkti_2;
       string vardi[9999];
       string uzvardi[9999];
       string produkti[9999];
       string vards;
       char x;

   {
       ifstream file;

       filename = "personuvardi.txt";
       file.open(filename.c_str());
       //file.get(x);
         while(!file.eof()){
                cout << x;
         file.get(x);
        if(x != ' ')
        {
            vards += x;

            cout << "Personu vardi: " << endl;
            cout <<"Vards:" << vards << endl;
            cout << endl;
        }

         }



              file.close();
        }



    filename = "uzvardi2.txt";
    file.open(filename.c_str());

    for(int j = 0; j < 8; j++)
        {
            cout <<"Personas:" << j << endl;
            file >> uzvardi_2;
            cout << uzvardi_2 << endl;
            uzvardi[j] = uzvardi_2;
        }
    cout << endl;

    for(int j = 0; j < 8; j++)
        {
            cout << uzvardi[j] << " ";

        }
    cout << endl;
    file.close();


    filename = "produkti2.txt";
    file.open(filename.c_str());

    for(int k = 0; k < 8; k++)
        {
            cout <<"Produkti:" << k << endl;
            file >> produkti_2;
            cout << produkti_2 << endl;
            produkti[k] = produkti_2;
        }
    cout << endl;

    for(int k = 0; k < 8; k++)
        {
            cout << produkti[k] << " ";

        }
    cout << endl;
    file.close();

    int a = 50;
    int b = 50;

    cout << endl;

    ofstream mans_fails;
    mans_fails.open("dati2.txt", ios::out);

        return 0;
}


