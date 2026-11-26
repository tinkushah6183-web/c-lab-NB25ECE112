#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("nums.txt");

    int n, count = 0, sum = 0;
    int min, max;

    while (fin >> n)
    {
        if (count == 0)
        {
            min = max = n;
        }

        if (n < min)
            min = n;

        if (n > max)
            max = n;

        sum += n;
        count++;
    }

    fin.close();

    cout << "Count = " << count << endl;
    cout << "Sum = " << sum << endl;

    if (count > 0)
    {
        cout << "Minimum = " << min << endl;
        cout << "Maximum = " << max << endl;
    }

    return 0;
}