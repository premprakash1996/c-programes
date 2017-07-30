#include<bits/stdc++.h>
//#include<conio.h>

using namespace std;

void dfs(vector< vector<int> > adj, vector<int> visit, string str, int s, int e, int n,stack <string> &st){
  str+=(48+s);
  visit[s]=1;
  if(s==e){
    st.push(str);
    return;
  }
  
  for(int i=0;i<n;i++){
    if(adj[s][i] && !visit[i])
    dfs(adj,visit,str,i,e,n,st);
  }
  
}



int main(){
	
  vector< vector<int> > adj{{0,1,0,0,1},{1,0,1,1,1},{0,1,0,1,0},{0,1,1,0,1},{1,1,0,1,0}};
	vector<int> visit{0,0,0,0,0};
	stack <string> st;
	int s,e,n=adj.size();
	cout<<n<<endl;
	s=0;
	e=2;
	string str;
  visit[s]=1;
	dfs(adj,visit,str,s,e,n,st);
	
	while(!st.empty()){
	  cout<<st.top()<<"  ";
	  st.pop();
	}
	
	return 0;
	//getch();
}
