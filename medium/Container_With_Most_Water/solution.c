// left, right ptr; 
// min of both * (left-right)

int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize-1, max = 0;

    while(left < right){
        int h = ( *(height+left) < *(height+right) ) ? *(height+left) : *(height+right);
        int width = right - left;

        int area = h * width;
        max = (max < area) ? area : max;

        if(*(height+left) < *(height+right)) {
            left++;
        }
        else if(*(height+right) < *(height+left)){
            right--;
        }
        else{
            left++;
            right--;
        }
    } 

    return max;
}