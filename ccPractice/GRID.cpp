 for(int i=1;i<=n;i++)
        for(int j=n;j>=1;j--)       //starting from backwards
            //For RayX[i][j]
            if( inp[i][j] =='.')    RayX[i][j] = (j!=n)?RayX[i][j+1]:1
            else RayX[i][j] = 0 //If you cannot start the ray from here then 0

            //For RayY[i][j]
            if ( inp[j][i] == '.' ) RayY[j][i] = (j!=n)RayY[j+1][i]:1
            else RayY[j][i] = 0 

    for(int i=1;i<=n;i++) 
        for(int j=1;j<=n;j++) 
            if ( RayX[i][j] == 1 && RayY[i][j] == 1)    sum++ 
    return sum 