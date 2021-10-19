#ifdef __cplusplus
extern "C" {
#endif

extern char    configdata[10][200];
extern char    timeday[30];
extern double  theseSecs;
extern double  startSecs;
extern double  secs;
extern  double ramGB;
extern  int    megaHz;
extern int     pagesize;
extern int     CPUconf;
extern int     CPUavail;

extern  int     hasMMX;
extern  int     hasSSE;
extern  int     hasSSE2;
extern  int     hasSSE3;
extern  int     has3DNow;

int getDetails();
void _calculateMHz();
void _cpuida();
void end_time();
void local_time();
void start_time();

#ifdef __cplusplus
};
#endif

