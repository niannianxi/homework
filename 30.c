int comp(int *a,int *b)
{
    return (*a-*b);
}//comp���������Ƚ�����Ԫ��
bool containsDuplicate(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),comp);//��������
    if(numsSize==0||numsSize==1)
    {
        return false;
    }
    int i;
    for(i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            return true;
        }
    }
    return false;
}
