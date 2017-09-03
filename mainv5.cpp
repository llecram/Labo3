#include<iostream>
using namespace std;
int main(){
  int i,j,k,l,m,bra,col,ur,chi,ar,pe,pa,ec,bol,ven;
  for(i=0;i<2;i=i+1){
    
    pe=21;
    ec=20;
    if(i==0){
      pe=pe+3;
    }
    if(i==1){
      pe=pe+1;
      ec=ec+1;
    }
    for(j=0;j<3;j=j+1){
      ur=24;
      pa=21;
      if(j==0){
        ur=ur+3; 
      }
      if(j==1){
        ur=ur+1;
        pa=pa+1;
      }
      if(j==2){
        pa=pa+3;
      }
      if(pe>=pa){
        for(k=0;k<3;k=k+1){
          chi=23;
          bol=10;
          if(k==0){
            chi=chi+3;
          }
          if(k==1){
            chi=chi+1;
            bol=bol+1;
          }
          if(k==2){
            bol=bol+3;
          }
          for(l=0;l<3;l=l+1){
            ven=7;
            ar=23;
            if(l==0){
              ven=ven+3;
            }
            if(l==1){
              ven=ven+1;
              ar=ar+1;
            }
            if(l==2){
              ar=ar+3;
            }
            for(m=0;m<3;m=m+1){
              bra=36;
              col=25;
              if(m==0){
                bra=bra+3;
              }
              if(m==1){
                bra=bra+1;
                col=col+1;
              }
              if(m==2){
                col=col+3;
              }
              cout<<i<<j<<k<<l<<m<<"\n";
              cout<<"brasil:   "<<bra<<"\n";
              cout<<"colombia: "<<col<<"\n";
              cout<<"uruguay:  "<<ur<<"\n";
              cout<<"chile:    "<<chi<<"\n";
              cout<<"argentina:"<<ar<<"\n";
              cout<<"peru:     "<<pe<<"\n";
              cout<<"paraguar: "<<pa<<"\n";
              cout<<"ecuador:  "<<ec<<"\n";
              cout<<"bolivia:  "<<bol<<"\n";
              cout<<"venezuela:"<<ven<<"\n";
              
              
            }
          }
      }
      }  
    }
  }
  
  
  return 0;
}