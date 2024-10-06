#include <iostream>
using namespace std;
void towerOfHanoi(int n, char from_source, char to_destination,
                  char aux_rod)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, from_source, aux_rod, to_destination);
    cout<<"move disk"<< n << " from source" << from_source
         << " to destination " << to_destination << endl;
    towerOfHanoi(n - 1, aux_rod, to_destination, from_source);
}
int main()
{
    int N = 3;
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}

