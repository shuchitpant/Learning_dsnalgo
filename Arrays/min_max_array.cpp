#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    vector<int> arr;
    cout << "Enter the size of array\n";
    cin >> x;
    cout << "Enter the elements in array\n";
    while(x--) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    
    sort(arr.begin() , arr.end());
    
    cout << "The minimum element is : " << arr.front() << "\nThe maximum element is : " << arr.back() << "\n";
    return 0;
}
