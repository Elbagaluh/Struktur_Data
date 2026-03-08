#include <bits/stdc++.h>
using namespace std;
void cekvowels(char a)
{
    if(a=='a' || a=='i' || a=='u' || a=='e' || a=='o'|| a=='A' || a=='I' || a=='U' || a=='E' || a=='O'){
        cout << "Vowels"<<endl;
    } else {
        cout << "Consonants"<<endl;
    }
}
int main(){
    cekvowels('c');
    cekvowels('E');
    return 0;
}