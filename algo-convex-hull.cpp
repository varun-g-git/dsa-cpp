#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x,y;
};
bool compare(Point a,Point b){
    if(a.x==b.x){
        return a.y<b.y;
    }
    return a.x<b.x;
}
int crossProduct(Point a,Point b,Point c){
    return (b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);
}
int main(){
    int n;
    cin>>n;
    if(n<=0){
        cout<<"Invalid input";
        return 0;
    }
    vector<Point> points(n);
    for(int i=0;i<n;i++){
        cin>>points[i].x>>points[i].y;
    }
    sort(points.begin(),points.end(),compare);
    vector<Point> hull;
    //Low
    for(int i=0;i<n;i++){
        while(hull.size()>=2&&
         crossProduct(hull[hull.size()-1],hull[hull.size()-2],points[i])<0){
            hull.pop_back();
        }
        hull.push_back(points[i]);
    }
    int lowerSize=hull.size();
    //Up
    for(int i=n-2;i>=0;i--){
        while(hull.size()>lowerSize&&
         crossProduct(hull[hull.size()-1],hull[hull.size()-2],points[i])<0){
            hull.pop_back();
        }
        hull.push_back(points[i]);
    }
    set<pair<int,int>> unique;
    for(Point p:hull){
        unique.insert({p.x,p.y});
    }
    for(auto p:unique){
        cout<<p.first<<" "<<p.second<<endl;
    }
   
}
