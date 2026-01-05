#include<bits/stdc++.h>
using namespace std;
int main(){
    string myText;

    // ifstream MyReadFile("test_1_1.txt");
    ifstream MyReadFile("input_1_1.txt");

    int start = 50;

    int count = 0;

    while (getline (MyReadFile, myText)) {
        // cout << myText <<endl;
        string s = myText.substr(1, myText.length()-1);
        char ch = myText[0];
        int num = stoi(s);


        if(ch == 'L'){
            start = (start - num) % 100;
        }
        else if(ch == 'R'){
            start = (start + num ) % 100;
        }

        if(start == 0){
            count++;
        }
    }

    cout<< count <<endl;

    MyReadFile.close();
}