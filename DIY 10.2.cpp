#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("in.txt");
    ofstream fout("out.txt");

    string line;
    int lineNo = 1;

    while (getline(fin, line))
    {
        fout << lineNo << ". " << line << endl;
        lineNo++;
    }

    fin.close();
    fout.close();

    cout << "File copied successfully.";

    return 0;
}