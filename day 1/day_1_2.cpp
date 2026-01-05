// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string myText;

//     ifstream MyReadFile("input_1_2.txt");

//     int start = 50;

//     int count = 0;

//     while (getline (MyReadFile, myText)) {
//         string s = myText.substr(1, myText.length()-1);
//         char ch = myText[0];
//         int num = stoi(s);


//         if(ch == 'L'){
//             if(start - num < 1){
//                 count++;
//             }
//             start = (start - num) % 100;
//         }
//         else if(ch == 'R'){
//             if(start + num > 99){
//                 count++;
//             }
//             start = (start + num ) % 100;
//         }
//     }

//     cout<< count <<endl;

//     MyReadFile.close();
// }