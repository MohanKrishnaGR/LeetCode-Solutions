bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int i = 0, count=0;

   while (i < flowerbedSize) {
        if (flowerbed[i] == 0 && 
            (i == 0 || flowerbed[i - 1] == 0) && 
            (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) {
            
            flowerbed[i] = 1; 
            count++; 
            i++; 
        }

        i++; 
    }


    if(count >= n)
        return true;
    else
        return false;
}