byte image[28*28 + 1] = {
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  38,  43, 105, 255, 253, 253, 253, 253, 253, 174,   6,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,  43, 139, 224, 226, 252, 253, 252, 252, 252, 252, 252, 252, 158,  14,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0, 178, 252, 252, 252, 252, 253, 252, 252, 252, 252, 252, 252, 252,  59,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0, 109, 252, 252, 230, 132, 133, 132, 132, 189, 252, 252, 252, 252,  59,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   4,  29,  29,  24,   0,   0,   0,   0,  14, 226, 252, 252, 172,   7,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  85, 243, 252, 252, 144,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  88, 189, 252, 252, 252,  14,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  91, 212, 247, 252, 252, 252, 204,   9,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,  32, 125, 193, 193, 193, 253, 252, 252, 252, 238, 102,  28,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,  45, 222, 252, 252, 252, 252, 253, 252, 252, 252, 177,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,  45, 223, 253, 253, 253, 253, 255, 253, 253, 253, 253,  74,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,  31, 123,  52,  44,  44,  44,  44, 143, 252, 252,  74,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  15, 252, 252,  74,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  86, 252, 252,  74,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   5,  75,   9,   0,   0,   0,   0,   0,   0,  98, 242, 252, 252,  74,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,  61, 183, 252,  29,   0,   0,   0,   0,  18,  92, 239, 252, 252, 243,  65,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0, 208, 252, 252, 147, 134, 134, 134, 134, 203, 253, 252, 252, 188,  83,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0, 208, 252, 252, 252, 252, 252, 252, 252, 252, 253, 230, 153,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,  49, 157, 252, 252, 252, 252, 252, 217, 207, 146,  45,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   7, 103, 235, 252, 172, 103,  24,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0
};