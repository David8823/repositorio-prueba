#include <iostream>

using namespace std;


int main()
{
    char a[][5]={{'h','o','l','a',' '},{'c','d','l'}};



//deje de ser quisquilloso
    cout <<&*a[0]<< endl;
    cout <<&a[0]<< endl;
    return 0;
}
