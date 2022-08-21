
using namespace std;

int main()
{
    int mat[3][3];
    int result[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if((mat[i][j]+mat[i][j-1]+mat[i+1][j]+mat[i-1][j]+mat[i][j+1])%2 == 0 && i>=0 && j>=0)
           {
             result[i][j] = 1;
             
           }
           else
           {
             result[i][j]=0;
             
           }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<result[i][j];
        }
        cout<<endl;
    }
     
     

    return 0;
}