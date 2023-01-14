//
// misc.h
//

void DoAlert(const char*);
void DoFatalAlert(const char*);
void DoAssert(const char* msg, const char* file, int line);
extern	void CleanQuit(void);
void SetMyRandomSeed(uint32_t seed);
uint32_t MyRandomLong(void);
extern	Handle	AllocHandle(long size);
extern	void *AllocPtr(long size);
void *AllocPtrClear(long size);
extern	void InitMyRandomSeed(void);
extern	void CheckPreferencesFolder(void);
float RandomFloat(void);
uint16_t RandomRange(unsigned short min, unsigned short max);
void CalcFramesPerSecond(void);
Boolean IsPowerOf2(int num);
float RandomFloat2(void);
float RandomFloatRange(float a, float b);
int PositiveModulo(int value, unsigned int m);

void SafeDisposePtr(Ptr ptr);

void MyFlushEvents(void);

int16_t SwizzleShort(const int16_t *shortPtr);
int32_t SwizzleLong(const int32_t *longPtr);
float SwizzleFloat(const float *floatPtr);
uint64_t SwizzleULong64(const uint64_t *longPtr);
uint32_t SwizzleULong(const uint32_t *longPtr);
uint16_t SwizzleUShort(const uint16_t *shortPtr);
void SwizzlePoint3D(OGLPoint3D *pt);
void SwizzleVector3D(OGLVector3D *pt);
void SwizzleUV(OGLTextureCoord *pt);


int16_t FSReadBEShort(short refNum);
uint16_t FSReadBEUShort(short refNum);
int32_t FSReadBELong(short refNum);
uint32_t FSReadBEULong(short refNum);
float FSReadBEFloat(short refNum);
