#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int mayor=arr[0], segundo=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>mayor){segundo=mayor; mayor=arr[i];}
        else if(arr[i]>segundo && arr[i]!=mayor) segundo=arr[i];
    }
    cout << "Segundo mayor: " << segundo;
}
