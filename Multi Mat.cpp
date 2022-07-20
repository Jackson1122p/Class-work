#include<iostream>
using namespace std;

int main()
{  
    
    int a [10][10], b[10][10], r1, r2, c1, c2, i, j, k, result [10][10]={0}; 
	                    
    cout<<"Enter Matrix-1 dimension like __ __: ";
    cin>>r1>>c1;
    cout<<"Enter Matrix-2 dimension like __ __: ";
    cin>>r2>>c2;

	while(r1 !=c2)
	{
		cout<<endl<<"Error! r1 != c2 it's necessary r1 = c2"<<endl;
        cout<<"AGAIN, Enter Matrix-1 dimension like __ __: ";
        cin>>r1>>c1;
        cout<<"Enter Matrix-2 dimension like __ __: ";
        cin>>r2>>c2;  
	}
	
  cout<<"Enter the Elements of 1st MATRIX: "<<endl;
  for(int i=0; i<r1; i++)
  {
    for(int j=0; j<c1; j++)
    { 
      cout<<"["<<i<<"]["<<j<<"] = ";
      cin>>a[i][j];
    }
  }
  
  
 
// section 2 taking and diplaying input for 2nd matrix 

   cout<<endl<<"Enter the Elements of 2nd MATRIX: "<<endl;
   
  for(int i=0; i<r2; i++)
  {
    for(int j=0; j<c2; j++)
    { 
      cout<<"["<<i<<"]["<<j<<"] = ";
      cin>>b[i][j];
    }
  }
  
  
  
//This section for multiplying the matrices

 for(int i=0; i<r1; i++)
  {
    for(int j=0; j<c2; j++){
     for(int k=0; k<c1; k++)
	 {
	  result[i][j]=	result[i][j]+a[i][k]*b[k][j];
     }      
    }
 }
 
// Now this section for diplaying output of the PGM
cout<<endl<<"This the 1st MATRIX:\n";
  for(int i=0; i<r1; i++)
  {
    for(int j=0; j<c1; j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  
  cout<<endl<<"This is the 2nd MATRIX:\n";
  for(int i=0; i<r2; i++)
  {
    for(int j=0; j<c2; j++)
    {
      cout<<b[i][j]<<" ";
    }
    cout<<endl;
  }
  

cout<<endl<<"This is the Multiplication of these two MATRIX:\n";
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }
  
  cout<<endl<<"Thanks buddy for giving me a chance for your help, Allah Hafiz and C-Yah";

}
