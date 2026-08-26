// TAke a String array and find a most common prefix 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    if (n <= 0) {
        cout << "No strings to process." << endl;
        return 0;
    }

    vector<string> arr(n);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    string first = arr[0];
    string last = arr[arr.size() - 1];
    string ans = "";

    for (int i = 0; i < first.length(); i++) {
        if (first[i] != last[i]) {
            break;
        }
        ans += first[i];
    }

    cout << "Longest Common Prefix: " << ans << endl;

    return 0;
}