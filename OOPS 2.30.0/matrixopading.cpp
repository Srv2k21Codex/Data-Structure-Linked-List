#include<iostream>
using namespace std;

class matrix
{
    int row;
    int column;
    int mat[20][20];
     public:
     matrix(int row, int column)
     {
        this ->row=row;
        this->column=column;
        cout<<"enter the matrix element:row"<<row<<"*"<<column<<endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>mat[i][j];
            }
        }
     }
     matrix()
     {

     }
    
     bool operator ==(matrix &m1)
     {
        return (m1.row==row&& m1.column==column);  
     }
     friend ostream& operator<<(ostream &o,matrix &m1)
     {
        for(int i=0;i<m1.row;i++)
        {
            for(int j=0;j<m1.column;j++)
            {
                o<<m1.mat[i][j]<<" ";
            }
           o<<"\n";
        }
        return o;
     }
     matrix operator +(matrix &m2)
     {
        matrix m1(row,column);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                m1.mat[i][j]=mat[i][j]+m2.mat[i][j];
            }
        }
        return m1;
     }


};
int main()
{
    matrix m1(3,3);
    matrix m2(3,3);
    matrix m3();
    
    cout<<"matrix 1"<<m1;
    cout<<"matrix m2"<<m2;
    m3=m1+m2;
    cout<<m3<<endl;
    
}