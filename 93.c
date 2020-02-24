int intersect(int* nums1, int nums1Size, int* nums2, int nums2Size){
	int i=0, j=0;
	int count=0;
	 int * intersect;
	if(nums1Size<nums2Size)
    intersect = (int *)malloc(nums1Size*sizeof(int));
    else
   intersect = (int *)malloc(nums2Size*sizeof(int));
	while(i == j){
		if(nums1[i] == nums2[j]){
			intersect[count++] = nums1[i];
			i++;
			j++;		
		}	
		else if(nums1[i] > nums2[j])
			j++;
		else
			i++;
	}
	return count;
} 

