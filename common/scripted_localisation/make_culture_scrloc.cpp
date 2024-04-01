#include<bits/stdc++.h>
using namespace std;
inline int read(){
	int sum=0,fh=1;
	char c=getchar();
	while(c>'9'||c<'0'){
		if(c=='-')fh=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		sum*=10;
		sum+=c-'0';
		c=getchar();
	}
	return sum*fh;
}
int main(){
//    freopen(".in","r",stdin);
    freopen("test.out","w",stdout);
    cout<<"defined_text = { "<<endl;
    cout<<"	name = state_culture_name_texts"<<endl;
    for(int i=0;i<=51;i++){
	cout<<"	text = {"<<endl;
	cout<<"		localization_key = state_culture_name_texts_"<<i<<endl;
	cout<<"		trigger = {"<<endl;
	cout<<"			check_variable = { state_culture = "<<i<<" }"<<endl;
	cout<<"		}"<<endl;
	cout<<"	}"<<endl;
	}
    cout<<"}"<<endl;
    cout<<"defined_text = { "<<endl;
    cout<<"	name = state_culture_desc_texts"<<endl;
    for(int i=0;i<=51;i++){
	cout<<"	text = {"<<endl;
	cout<<"		localization_key = state_culture_desc_texts_"<<i<<endl;
	cout<<"		trigger = {"<<endl;
	cout<<"			check_variable = { state_culture = "<<i<<" }"<<endl;
	cout<<"		}"<<endl;
	cout<<"	}"<<endl;
	}
    cout<<"}"<<endl;
//	  fclose(stdin);
//    fclose(stdout);
	return 0;
}

