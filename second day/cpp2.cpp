#include <iostream>
using namespace std;
int main() {

// int num;
// cin >> num;
// for (int i=0; i<=num; i++) {
//     for (int j =1; j <= 10; j++) {
//         cout <<j * i << endl;
//     };
// };



// int num;
// cin >> num;
// for (int i =1; i<= num; i++) {
//     for (int j = 1; j <=i; j++) {
//         cout << "*";
//     }
//     cout << "\n";
// }


// int num;
// cin >> num;
// for (int i = 0; i <= num; i++) {
//     for (int j = num; j > i; j--) {
//         cout << "*";

//     }
//     cout << "\n";
// }



// int n;
// cout << "Enter the number of rows of the pyramid\n";
// cin >> n;
// for (int i =1; i <= n; i++) {
//     for (int j = 1; j <= n -i; j++) {
//         cout << " ";
//     }
//     for (int j = 1; j <= 2 * i - 1; j++) {
//         cout << "*";
//     }
//     cout << "\n";
// }


int n;
cout << "Enter the Number of rows for diamond\n";
cin >> n;
for (int i = 1; i <= n*2 -1; i++) {
    if(i <= n){
        for (int j =1 ; j <= n-i; j++){
            cout << " ";

        }
        for (int j = 1; j <= 2 * i -1; j++) {
            cout << "*";
        }
    }
    else{
        for (int j = 1; j <= i - n; j++){
            cout << " ";
        }
        for ( int j = 1; j <= 2 * (n * 2 -i) - 1; j++){
            cout << "*";
            }
            }
            cout << "\n";
            }

    







return 0;
}