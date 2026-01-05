#include <bits/stdc++.h>
using namespace std;

bool isCompare(string firstHalf, string secondHalf){
    if(firstHalf.size() != secondHalf.size()){
        return false;
    }
    for(long long int i = 0; i < firstHalf.size(); i++){
        if(firstHalf[i] != secondHalf[i]){
            return false;
        }
    }
    return true;
}

long long int checkNumber(long long int number){
    string s = to_string(number);
    string firstHalf = s.substr(0, s.size()/2);
    string secondHalf = s.substr(s.size()/2);
    if(isCompare(firstHalf, secondHalf)){
        return stoll(s);
    }
    return 0;
}

int main() {
    string myText;
    long long int answer = 0;
    ifstream MyReadFile("input_2_1.txt");

    while (getline(MyReadFile, myText, ',')) {
        size_t dashPos = myText.find('-');

        if (dashPos != string::npos) {
            string start = myText.substr(0, dashPos);
            string end   = myText.substr(dashPos + 1);

            for(long long int i = stoll(start); i <= stoll(end); i++) {
                answer += checkNumber(i);
            }
        }
    }

    cout << answer << endl;

    MyReadFile.close();
    return 0;
}
