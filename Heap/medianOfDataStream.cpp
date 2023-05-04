#include<bits/stdc++.h>

using namespace std;

priority_queue<int,vector<int>> qmax;
priority_queue<int,vector<int>,greater<int>> qmin;

void addNumber(int x){
    if(qmax.size()==qmin.size()){
        if(qmax.size()==0){
            qmax.push(x);
            return;
        }
        if(x<qmax.top()){
            qmax.push(x);
        }else{
            qmin.push(x);
        }
    }else{
        if(qmax.size()>qmin.size()){
            if(x>=qmax.top()){
                qmin.push(x);
            }else{
                int temp = qmax.top();
                qmax.pop();
                qmin.push(temp);
                qmax.push(x);
            }
        }else{
            if(x<=qmin.top()){
                qmax.push(x);
            }else{
                int temp = qmin.top();
                qmin.pop();
                qmax.push(temp);
                qmin.push(x);
            }
        }
    }
}

double findMedian(){
    if(qmax.size()==qmin.size()){
        return (qmax.top()+qmin.top())/2.0;
    }else{
        if(qmax.size()>qmin.size()){
            return qmax.top();
        }else{
            return qmin.top();
        }
    }
}


int main(){

    int option;

    while(option!=0){
        cout<<"1.Insert Number\n2.Find Median\n0.Exit"<<endl;
        cout<<"Enter Option: ";
        cin>>option;

        switch (option)
        {
        case 1:
            cout<<"Enter Number: ";
            int number;
            cin>>number;
            addNumber(number);
            break;

        case 2:
            printf("Median : %.2f\n",findMedian());
            break;

        case 0:
            cout<<"Thank You !!!"<<endl;
            break;
        
        default:
            cout<<"Invalid Option, Please enter right one !!"<<endl;
            break;
        }
    }


    return 0;
}