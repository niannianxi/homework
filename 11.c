//��дһ��������������һ���޷�������������������Ʊ���ʽ������λ��Ϊ ��1�� �ĸ�����Ҳ����Ϊ������������
int hammingWeight(uint32_t n) {
	short count=0;
	while(n!=0)
	{
		if(n%2==1)
		count++;
		n=n/2;
	}
    return count;
}