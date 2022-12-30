#include <iostream>
using namespace std;

int main() {
    int N, X, A[100];
    string ans = "No";
    cin >> N >> X;
    for(int i=0; i<N; i++){
        cin >> A[i];
        if(A[i] == X){
            ans = "Yes";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
