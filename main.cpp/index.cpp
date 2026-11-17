#include <iostream>
using namespace std;

int main() {

int Total = 0;
double array[5];


cout << "=== Please input five numbers ===" << endl;

for (int i = 0; i < 5; i++) {

    cout << i + 1 << ". Input: ";

    cin >> array[i];

    Total += array[i];

}

double largest = array[0];
double smallest = array[0];


for (int i = 1; i < 5; i++) {

    if (array[i] > largest) {
        largest = array[i];
    }

    if (array[i] < smallest) {
        smallest = array[i];
    }
}


double avg = Total / 5.0;

cout<<"/n ==The Result=="<<endl;
cout << "Total: " << Total << endl;
cout << "Average: " << avg << endl;
cout<<"The largest number:"<<largest<<endl;
cout<<"The smallest number:"<<smallest<<endl;

return 0;

}