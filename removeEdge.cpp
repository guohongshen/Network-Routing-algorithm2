#include"NetTopo.h"

//ɾ����(v1,v2)
bool NetTopo::removeEdge(int v1, int v2)
{
	if (v1 > -1 && v1<maxVertices && v2>-1 && v2 < maxVertices && Edge[v1][v2]>0 && Edge[v1][v2] < inf)//�������ߵĺϷ��ԣ�1�����v1��v2��·�ɼ����ڣ�2��v1��v2֮���ǿɴ�ġ�
	{
		Edge[v1][v2] = Edge[v2][v1] = inf;//���ߵ�Ȩ�ظ�Ϊ���ɴ�
		numEdges--;//�ߵĸ�������
		return true;//�޸ĳɹ�
	}
	else
		return false;//�޸�ʧ��
};