#include<iostream>
using namespace std;
int nil = -1;

struct tree{
    int p, l, r;
};

tree t[100000];
int n, d[100000];

void print(int a){
    cout << "node " << a << ": ";
    cout << "parent = " << t[a].p << ", ";
    cout << "depth = " << d[a] << ", ";

    if(t[a].p == nil){
        cout << "root";
    }else if(t[a].l == nil){
      cout << "leaf";
    }
    else {
        cout << "internal node";
    }
    cout << ", ";

    cout << "[";

    int c;
    for(int i = 0, c = t[a].l; c != nil; i++, c = t[c].r){
        if(i) cout << ", ";
        cout << c;
    }
    cout << "]" << endl;
}

int rec(int a, int b){
    d[a] = b;
    if(t[a].l != nil)   rec(t[a].l, b+1);
    if(t[a].r != nil)   rec(t[a].r, b);
}

int main(){
    int n;
    int v, d, c, l;
    cin >> n;

    for(int i = 0; i < n; i++){
        t[i].p = t[i].l = t[i].r = nil;
    }

    for(int i = 0; i < n; i++){
        cin >> v >> d;
        for(int j = 0; j < d; j++){
            cin >> c;
            if(j == 0){
                t[v].l = c;
            }else{
                t[l].r = c;
            }
            l = c;
            t[c].p = v;
        }
    }

    int r;
    for(int i = 0; i < n; i++){
        if(t[i].p == nil)   r = i;
    }

    rec(r, 0);

    for(int i = 0; i < n; i++){
        print(i);
    }

    return 0;
}
