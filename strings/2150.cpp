#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int len1,len2,i,j;
    while(cin>>a)
    {
        cin.ignore();
        getline(cin,b);
        //getchar();
        len1=a.size();len2=b.size();
        int cnt=0;

        for(i=0;i<len1;i++)
        {
            for(j=0;j<len2;j++)
            {
                if(a[i]==b[j])
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }return 0;

}
