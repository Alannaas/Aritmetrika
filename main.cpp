#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    int skaicius1;
    input >> skaicius1;


    int skaicius2;
    input >> skaicius2;


    for (int i = skaicius1; i <= skaicius2; i++){
            for (int g = skaicius1; g <= skaicius2; g++){
                if(i - g >=0 && i % g == 0 && i != g){
                output<< i << " + " << g << " = " << i + g<<endl;
                output<< i << " - " << g << " = " << i - g<<endl;
                output<< i << " * " << g << " = " << i * g<<endl;
                output<< i << " / " << g << " = " << i / g<<endl;
                output<<"*****************************************"<<endl;
                }
            }
    }


    return 0;
}
