

#define BI_RGB 0
#define BI_RLE8 1
#define BI_RLE4 2
#define BI_BITFIELDS 3
#define BI_JPEG 4
#define BI_PNG 5

#ifdef _WIN32
typedef struct tagBITMAPFILEHEADER {
	short	bfType;
	int	bfSize;
	short	bfReserved1;
	short	bfReserved2;
	int	bfOffBits;
} BITMAPFILEHEADER;
#else
typedef struct tagBITMAPFILEHEADER {
	short	bfType;
	int	bfSize;
	short	bfReserved1;
	short	bfReserved2;
	int	bfOffBits;
} __attribute__((packed)) BITMAPFILEHEADER;
#endif

typedef struct tagBITMAPINFOHEADER {
	int	biSize;
	int	biWidth;
	int	biHeight;
	short	biPlanes;
	short	biBitCount;
	int	biCompression;
	int	biSizeImage;
	int	biXPelsPerMeter;
	int	biYPelsPerMeter;
	int	biClrUsed;
	int	biClrImportant;
} BITMAPINFOHEADER;

