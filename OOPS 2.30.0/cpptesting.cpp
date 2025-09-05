#include<iostream>
#include<vector>

using namespace std;
class matrix
{
    int rows;
    int cols;
    vector<vector<int>>mat;
    public:
    matrix(int r, int c):rows(r),cols(c)
    {
        for(int i=0;i<rows;i++)
        {
           vector<int>row;
           for(int j=0;j<cols;j++)
           {
             row.push_back(i+j);
           }
           mat.push_back(row);
        }
    }
    int  getrows()const { return rows;}
    int getcols()const {return cols;}
    int getdata(int row,int col)const { return mat[row][col];}
    void setdata(int row,int col,int data) { mat[row][col]=data;}//this is the second way for forming 2d matrix
    void setvalue(const vector<vector<int>> & newdata)
    {
        if(newdata.size()!=rows||newdata[0].size()!=cols)
        {
            cerr<<"passed array of matrix not support:"<<endl;
            return ;
        }
        mat=newdata;
    }
    
};
int main()
{
    
    matrix m(3,4);
   for(int i=0;i<m.getrows();i++)
    {
        for(int j=0;j<m.getcols();j++)
        {
            m.setdata(i,j,i+j*10);
        }
    }
    vector<vector<int>>newdata;
    for(int i=0;i<m.getrows();i++)
    {
        vector<int>row;
        for(int j=0;j<m.getcols();j++)
        {
           row.push_back(i+2); 
        }
        newdata.push_back(row);

    }
    m.setvalue(newdata);
    for(int i=0;i<m.getrows();i++)
    {
        for(int j=0;j<m.getcols();j++)
        {
            cout<<m.getdata(i,j)<<" ";
        }
        cout<<endl;
    }
}