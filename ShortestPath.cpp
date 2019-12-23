#include"NetTopo.h"
//�󶥵�v��������������·��
void NetTopo::ShortestPath(int v,int dist[],int path[])
{
    int n=numVertices;
    bool *S=new bool[n];//���·�����㼯
    //int i,j,k;
    int w,min;
    for(int i=0;i<n;++i)
    {
        dist[i]=getWeight(v,i);//���·�����������ʼ��
        S[i]=false;
        if(i!=v&&dist[i]<inf)
            path[i]=v;  //����ö����ǰһ������
        else
            path[i]=-1;
    }
    S[v]=true;  //������v���붥�㼯
    dist[v]=0;
    for(int i=0;i<n-1;i++)
    {
        min=inf;
        int u=v;
        //ѡȡ�������·�����㼯S�еĶ���
        for(int j=0;j<n;j++)
        {
            if(!S[j]&&dist[j]<min)
            {
                u=j;min=dist[j];
            }
        }
        S[u]=true;
        for(int k=0;k<n;++k)
        {
            w=getWeight(u,k);
            //�õ�����u�����·������ȥ��������δ�ҵ����·�����ȵĵ�
            if(!S[k]&&w<inf&&dist[u]+w<dist[k])
            {
                dist[k]=dist[u]+w;//�������·������
                path[k]=u;  //�޸ĵ�k�����·��
            }
        }
    }
}
