unsigned char image[28*28] = {
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   34,  169, 250, 40,  0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   58,  242, 221, 143, 17,  0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   75,  247, 143, 10,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   37,  245, 184, 2,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   8,   192, 200, 14,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   139, 247, 28,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   7,   231, 183, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   125, 243, 50,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   195, 184, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   61,  251, 41,  0,   0,   0,   64,  43,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   152, 210, 7,   0,   96,  237, 254, 247, 107, 0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   250, 84,  0,   6,   223, 84,  13,  87,  246, 72,  0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   43,  254, 80,  0,   56,  151, 0,   0,   0,   147, 193, 0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   67,  254, 41,  0,   13,  19,  0,   0,   0,   42,  253, 0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   67,  254, 13,  0,   0,   0,   0,   0,   0,   14,  253, 0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   68,  255, 13,  0,   0,   0,   0,   0,   0,   77,  240, 0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   67,  254, 13,  0,   0,   0,   0,   0,   5,   181, 147, 0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   25,  229, 105, 0,   0,   0,   0,   5,   156, 213, 20,  0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   107, 246, 105, 14,  49,  95,  217, 209, 27,  0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   107, 246, 253, 253, 240, 130, 6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   
};