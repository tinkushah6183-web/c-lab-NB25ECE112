
#include <iostream>
#include <string>
using namespace std;

void logmsg(const string& msg, int level = 1)
{
    const string tag[] = {"INFO", "WARNING", "ERROR"};
    cout << "[" << tag[level] << "] " << msg << endl;
}

double intrest(double principal, double rate, int years)
{
    return principal * rate * years / 100;
}

int main()
{
    logmsg("system started");
    logmsg("low memory", 2);

    cout << "intrest = " << intrest(1000, 2, 9) << endl;

    return 0;
}