#include <iostream>
using namespace std;

int main() {
int arr[] = {1, 2, 3, 4, 5};
int *ptr = arr;
cout <<*ptr++<<" "<<*(ptr++) << endl;

return 0;
}
