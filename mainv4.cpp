#include<iostream>
using namespace std;
int main(){
  int i,j,k,l,m,eq[9];
  for(i=0;i<2;i=i+1){
    
    eq[5]=21;
    eq[7]=20;
    if(i==0){
      eq[5]=eq[5]+3;
    }
    if(i==1){
      eq[5]=eq[5]+1;
      eq[7]=eq[7]+1;
    }
    for(j=0;j<3;j=j+1){
      eq[2]=24;
      eq[6]=21;
      if(j==0){
        eq[2]=eq[2]+3; 
      }
      if(j==1){
        eq[2]=eq[2]+1;
        eq[6]=eq[6]+1;
      }
      if(j==2){
        eq[6]=eq[6]+3;
      }
      if(eq[5]>=eq[6]){
        for(k=0;k<3;k=k+1){
          eq[3]=23;
          eq[8]=10;
          if(k==0){
            eq[3]=eq[3]+3;
          }
          if(k==1){
            eq[3]=eq[3]+1;
            eq[8]=eq[8]+1;
          }
          if(k==2){
            eq[8]=eq[8]+3;
          }
          for(l=0;l<3;l=l+1){
            eq[9]=7;
            eq[4]=23;
            if(l==0){
              eq[9]=eq[9]+3;
            }
            if(l==1){
              eq[9]=eq[9]+1;
              eq[4]=eq[4]+1;
            }
            if(l==2){
              eq[4]=eq[4]+3;
            }
            for(m=0;m<3;m=m+1){
              eq[0]=36;
              eq[1]=25;
              if(m==0){
                eq[0]=eq[0]+3;
              }
              if(m==1){
                eq[0]=eq[0]+1;
                eq[1]=eq[1]+1;
              }
              if(m==2){
                eq[1]=eq[1]+3;
              }
              cout<<i<<j<<k<<l<<m<<"\n";
              cout<<"brasil:   "<<eq[0]<<"\n";
              cout<<"colombia: "<<eq[1]<<"\n";
              cout<<"uruguay:  "<<eq[2]<<"\n";
              cout<<"chile:    "<<eq[3]<<"\n";
              cout<<"argentina:"<<eq[4]<<"\n";
              cout<<"peru:     "<<eq[5]<<"\n";
              cout<<"paraguar: "<<eq[6]<<"\n";
              cout<<"ecuador:  "<<eq[7]<<"\n";
              cout<<"bolivia:  "<<eq[8]<<"\n";
              cout<<"venezuela:"<<eq[9]<<"\n";
              
              
            }
          }
      }
      }  
    }
  }
  
  
  return 0;
}