#include "osm.h"
/* Initialization function that the user must call
 * before running any other library function.
 * The function may, for example, allocate memory or
 * create/open files.
 * Pay attention: this function may be empty for some desings. It's fine.
 * Returns 0 uppon success and -1 on failure
 */
int osm_init()
{

}


/* finalizer function that the user must call
 * after running any other library function.
 * The function may, for example, free memory or
 * close/delete files.
 * Returns 0 uppon success and -1 on failure
 */
int osm_finalizer
{

}


/* Time measurement function for a simple arithmetic operation.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_operation_time(unsigned int iterations)
{
    struct timeval start;
    struct timeval end;
    unsigned int innerIter = iterations;
    if (innerIter == 0)
    {
        innerIter  = 1000;
    }
    gettimeofday(&start, NULL);
    int startTime = start.tv_usec;
    std::cout << starttime << endl;
}


/* Time measurement function for an empty function call.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_function_time(unsigned int iterations)
{

}


/* Time measurement function for an empty trap into the operating system.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_syscall_time(unsigned int iterations)
{

}

/* Time measurement function for accessing the disk.
   returns time in nano-seconds upon success,
   and -1 upon failure.
   */
double osm_disk_time(unsigned int iterations);


typedef struct {
    char* machineName; //Machine name. check man 2 gethostname.
    double instructionTimeNanoSecond; //Instruction time - in nano-seconds
    double functionTimeNanoSecond; //function time - in nano second
    double trapTimeNanoSecond; // Trap time - in nano-seconds.
    double diskTimeNanoSecond; // Disk time - in nano-seconds.
    double functionInstructionRatio; //Function/instruction ratio - the respective times divided.
    double trapInstructionRatio;    //Trap/instruction ratio - the respective times divided.
    double diskInstructionRatio; // Disk/instruction ratio - the respective times divided.
} timeMeasurmentStructure;

timeMeasurmentStructure measureTimes (unsigned int operation_iterations,
                                      unsigned int function_iterations,
                                      unsigned int syscall_iterations,
                                      unsigned int disk_iterations);

#endif
