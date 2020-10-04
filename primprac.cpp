void primMST(int graph[v][v]){
    int parent[v],key[v]={INT_MAX};
    bool mstSet[v]={false};
    key[0]=0;
    parent[0]=-1;
    for(int count=0;count<v-1;count++){
        int u=minkey(key,mstSet);
        mstSet[u]=true;
        for(int i=0;i<v;i++){
            if(graph[u][i] && mstSet[i]==false && graph[u][i]<key[i]){
                parent[i]=u;
                key[i]=graph[u][i];
            }
        }
    }
}
int minkey(int key[],bool mstSet[]){
    int min=INT_MAX,int min_index;
    for(int i=0;i<v;i++){
        if(mstSet[i]==false && key[i]<min){
            min_index=i;
            min=key[i];
        }
    }
    return min_index;
}