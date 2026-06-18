// Remove duplicate characters
#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"enter string: ";
    cin>>str; //programming

    for(int i = 0;str[i] !='\0';i++)
    {
        for(int j= i+1; str[j] !='\0';)
        {
            if(str[i] == str[j])
            {
                int k = j;

                while(str[k] !='\0')
                {
                    str[k] = str[k + 1];
                    k++;
                }
            }
            else{
                j++;
            }
        }
    }
    cout<<"after removing duplicates: "<<str;
    return 0;
}