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
       string vards[9999];
       char x;
       int sk = 0;

   {
       ifstream file;

       filename = "personuvardi.txt";
       file.open(filename.c_str());
       //file.get(x);
         while(!file.eof()){
                //cout << x;
         file.get(x);
        if(x != ',')
        {
            vards[sk] += x;


            //cout << "Personu vardi: " << endl;
            //cout <<"Vards:" << vards[3] << endl;
           // cout << endl;
        }
        else
        {
            sk = sk+1;
        }

         }


    }
        int d;
        int c;
            {
                if (x != ',')
                {
                    d = c + 1;
                }
                if (x != '.')
                {

                }

         }
         cout << "Personu vardi: " << endl;
            cout <<"Vards:" << vards[d] << endl;


            cout << endl;
            }
 file.close();


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

   /* for(int x = 0; x < a; x++)
     {
      if(x == 0)
          {
             cout << "ID";
             cout << " ";
             mans_fails << "ID ";
          }
         if(x == 1)
             {
                cout << "Vards";
                cout << " ";
                mans_fails << "Vards ";
             }
            if(x == 2)
                {
                    cout << "Uzvards";
                    cout << " ";
                    mans_fails << "Uzvards ";
                }
                if(x == 3)
                    {
                        cout << "Vecums";
                        cout << " ";
                        mans_fails << "Vecums ";
                    }
                    if(x == 4)
                        {
                            cout << "Tel.nr.";
                            cout << " ";
                            mans_fails << "Tel.nr. ";
                        }
                        if(x == 5)
                            {
                                cout << "Ceka nr.";
                                cout << " ";
                                mans_fails << "Ceka nr. ";
                            }
                            if(x == 6)
                                {
                                    cout << "Produkti";
                                    cout << " ";
                                    mans_fails << "Produkti ";
                                }
     }
    cout << endl;
    mans_fails << endl;

   */     return 0;
}




