    a.const unsigned int values[5]={2,4,6,8,10};
    b.unsigned int *vPtr;
    c.
    const unsigned int values[5]={2,4,6,8,10};
    for(int i=0;i<=4;i++)
        cout<<values[i]<<endl;
    d.
    unsigned int values[5];
    unsigned int *vPtr;
    vPtr=values;
    cout<<vPtr;
    e.
    int values[3]={0,1,2};
    int *valuesPtr;
    valuesPtr=values;
    for(int i=0;i<=2;i++)
        cout<<*(valuesPtr+i)<<endl;
    f.
    int values[3]={0,1,2};
    for(int i=0;i<=2;i++)
        cout<<*(values+i)<<endl;
    g.
    int values[3]={0,1,2};
    int *valuesPtr;
    valuesPtr=values;
    for(int i=0;i<=2;i++)
        cout<<valuesPtr[i]<<endl;
    h.
    int values[5]={2,4,6,8,10};
    int *valuesPtr;
    valuesPtr=values;
    cout<<values[4]<<endl;
    cout<<*(values+4)<<endl;
    cout<<valuesPtr[4]<<endl;
    cout<<*(valuesPtr+4)<<endl;
    i.
    unsigned int values[5]={2,4,6,8,10};
    unsigned int *vPtr;
    vPtr=values;
    cout<<vPtr<<endl;
    cout<<(vPtr+3)<<endl;//values[4]的地址
    cout<<*(vPtr+3)<<endl;//values[4]的值
    j.
    unsigned int values[5]={2,4,6,8,10};
    unsigned int *vPtr;
    vPtr=&values[4];
    cout<<vPtr<<endl;
    vPtr-=4;
    cout<<(vPtr)<<endl;//values[0]的地址
    cout<<*(vPtr)<<endl;//values[0]的值
