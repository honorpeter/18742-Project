byte image[28*28 + 1] = {
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,  12,  99,  91, 142, 155, 246, 182, 155, 155, 155, 155, 131,  52,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0, 138, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 252, 210, 122,  33,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0, 220, 254, 254, 254, 235, 189, 189, 189, 189, 150, 189, 205, 254, 254, 254,  75,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,  35,  74,  35,  35,  25,   0,   0,   0,   0,   0,   0,  13, 224, 254, 254, 153,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  90, 254, 254, 247,  53,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   6, 152, 246, 254, 254,  49,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  66, 158, 254, 254, 249, 103,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  54, 251, 254, 254, 254, 248,  74,   5,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 140, 254, 254, 254, 254, 254, 254, 202, 125,  45,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  58, 181, 234, 254, 254, 254, 254, 254, 254, 252, 140,  22,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  30,  50,  73, 155, 253, 254, 254, 254, 254, 191,   2,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  91, 200, 254, 254, 254, 254, 118,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   4, 192, 254, 254, 254, 154,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 141, 254, 254, 254, 116,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,  25, 126,  86,   0,   0,   0,   0,   0,   0,   3, 188, 254, 254, 250,  61,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,  24, 209, 254,  15,   0,   0,   0,   0,   0,  23, 137, 254, 254, 254, 209,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0, 168, 254, 254,  48,   9,   0,   0,   9, 127, 241, 254, 254, 255, 242,  63,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0, 101, 254, 254, 254, 205, 190, 190, 205, 254, 254, 254, 254, 242,  67,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,  33, 166, 254, 254, 254, 254, 254, 254, 254, 254, 250, 138,  55,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   7,  88, 154, 116, 194, 194, 154, 154,  88,  49,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0
};