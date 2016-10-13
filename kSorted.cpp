#include <bits/stdc++.h>
using namespace std;


#define vi vector <int>
#define pii pair < int, int >
vector < vi > Arr_List(4);
vi final;
priority_queue< pair < int, pii >, vector< pair< int, pii > >, greater < pair < int,pii > > > pq;

main(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			int x;
			cin>>x;
			//
			Arr_List[i].push_back(x);
		}
	}
	for(int i=0;i<Arr_List.size();i++){
		pq.push(make_pair(Arr_List[i][0], make_pair(i,0)));

	}	

	while(!pq.empty()){
		auto id = pq.top();
		final.push_back(id.first);
		pq.pop();
		int i=id.second.first;
		int it = id.second.second+1;
		if(it < Arr_List[i].size()){
			pq.push(make_pair(Arr_List[i][it], make_pair(i, it)));
		}

	}
	for(int i=0;i<final.size();i++){
		cout<<final[i]<<" ";
	}
}



