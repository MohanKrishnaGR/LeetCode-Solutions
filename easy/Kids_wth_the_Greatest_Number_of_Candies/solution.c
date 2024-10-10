
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
 int max= INT_MIN;

 bool* result = (bool*)malloc(candiesSize * sizeof(bool));
 for(int i = 0; i < candiesSize; i++){
    if(max < *(candies+i)){
        max = *(candies+i);
    }
 }   

 for(int i = 0; i < candiesSize; i++){
    if((*(candies+i) + extraCandies) >= max ){
        *(result+i) = true;
    } 
    else{
        *(result+i) = false;
    }
 }

 *returnSize = candiesSize;

 return result;



}