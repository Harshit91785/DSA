#include<iostream>
using namespace std;
/// @brief 
/// @return 
int main()
{
    char arr[100];
    int i,vowel=0 , consonant=0 , space = 0;
    puts("enter the string");
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
    {
       if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
       {
        vowel = vowel+1;
       } 
       else if(arr[i]==' ')
       {
        space =space +1 ;
       }
       else{
        consonant = consonant+1;
       }
    }
    cout<<"no of vowels in given string  "<<vowel ;
    cout<<"no of consonant"<<consonant;

    return 0 ;
}