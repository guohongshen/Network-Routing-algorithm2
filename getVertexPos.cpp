#include"NetTopo.h"

//���������ڶ�����е��±�
int NetTopo::getVertexPos(int v)//������IP
{
	for (int i = 0;i < numVertices;++i)
	{
		if (VerticesList[i] == v)
			return i;//����IP��·�ɼ����е����
	}
	return -1;//û�ҵ���ʧ��
};