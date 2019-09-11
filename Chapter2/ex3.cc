#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    count = count + 1; // count becomes 1
    count += 1; // count becomes 2
    ++count; // count becomes 3
    // This ++ is called a prefix increment operator
    count++; // count becomes 4
    // This ++ is called a postfix increment operator
    return 0;
}
