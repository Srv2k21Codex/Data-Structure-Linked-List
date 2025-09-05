#include<iostream>
#include<vector>

using namespace std;
class matrix
{
    private:
    vector<vector<int>>data;
    int rows;
    int cols;
    public:
    matrix(int r,int c):rows(r),cols(c){
       /* for(int i=0;i<rows;i++)
        {
            vector<int>row;
            for(int j=0;j<cols;j++)
            {
                row.push_back(i+j);
            }
            data.push_back(row);
        }*/
    }
    int getrows()const { return rows;}
    int getcols()const {return cols;}
    int getvalue(int row,int col)const{ return data[row][col];}
    void setvalue(int row,int col, int value){ data[row][col]=value;}
    // new function to set the matrix using push_back
    void setdata(const vector<vector<int>> &newdata)
    {
        if(newdata.size()!=rows||newdata[0].size()!=cols)
        {
            cerr<<"invalid size of input data"<<endl;
            return;
        }
        data=newdata;
    }

};
int main()
{
    matrix m(3,4);
  /* for(int i=0;i<m.getrows();i++)
  {
      for(int j=0;j<m.getcols();j++)
      {
          m.setvalue(i,j,i*10+j);
      }
  }*/
//create a new data vector using push_bac/k
    vector<vector<int>>newdata;
    for(int i=0;i<m.getrows();i++)
    {
        vector<int>row;
        for(int j=0;j<m.getcols();j++)
        {
            row.push_back(i*10+j);
        }
        newdata.push_back(row);
    }
   //set the data in the matrix using push_back
   m.setdata(newdata);
   for(int i=0;i<m.getrows();i++)
   {
    for(int j=0;j<m.getcols();j++)
    {
        cout<<m.getvalue(i,j)<<" ";
    }
    cout<<endl;
   }
   return 0;
}