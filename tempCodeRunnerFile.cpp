       maxx = array1[0],minn = array1[0];
        for(int i=0;i<n;i++){
            if(array1[i]>maxx)
                maxx = array1[i];
            if(array1[i]<minn)
                minn = array1[i];
        }
        diff1 = maxx - minn;
        maxx = array2[0],minn = array2[0];
        for(int i=0;i<n;i++){
            if(array2[i]>maxx)
                maxx = array1[i];
            if(array2[i]<minn)
                minn = array1[i];
        }
        diff2 = maxx - minn;
        cout<<std::max(diff1,diff2)<<endl;
    }
}