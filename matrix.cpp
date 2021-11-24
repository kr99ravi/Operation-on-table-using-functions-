//202115
#include<iostream>
using namespace std;
#define N 3
void add(int m_1[][N],int m_2[][N],int m_3[][N])
{
 for(int i=0;i<N;++i)
    {
        for(int j=0;j<N;++j)
              m_3[i][j]=m_1[i][j]+m_2[i][j];
    }
}
void substraction(int m_1[][N],int m_2[][N],int m_3[][N])
{
 for(int i=0;i<N;++i)
    {
        for(int j=0;j<N;++j)
              m_3[i][j]=m_1[i][j]-m_2[i][j];
    }
}
void multiplication(int m_1[][N],int m_2[][N],int m_3[][N])
{
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<N;j++)
       {
          m_3[i][j]=0;{
             for(int k=0;k<N;k++)
                m_3[i][j]+=m_1[i][k]*m_2[k][j];  
          }
           
       }
   }
}
void inverse(int m_1[][N],int m_3[][N])
{
 for(int i=0;i<N;++i)
    {
        for(int j=0;j<N;++j){
          m_3[i][j]=m_1[j][i];  
        }
              
    }
}
int main()
{
    int m_1[N][N];
    int m_2[N][N];
    int m_3[N][N];
    char opt;
    cout<<"Enter first Matrix";
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>m_1[i][j];
        }
    }
    cout<<"Enter second Matrix"<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>m_2[i][j];
        }
    }
    cout<<"Enter 1 for addtion,2 for substraction,3 for multiplication and 4 for transpose of matrix 1 and 5 for transpose of matrix 2"<<endl;
    cin>>opt;
    if(opt=='1')
      add(m_1,m_2,m_3);
    else if(opt=='2')
      substraction(m_1,m_2,m_3);
    else if(opt=='3')
      multiplication(m_1,m_2,m_3);
    else if(opt=='4')
      inverse(m_1,m_3);
    else if(opt=='5')
      inverse(m_2,m_3);
      //Printing array
    for(int i=0;i<N;i++)
    {
       for(int j=0;j<N;j++)
            cout<<m_3[i][j]<<" ";
        cout<<endl;
    }
        
    return 0;
}
