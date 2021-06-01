#include <iostream>
#include <mpi.h>

using namespace std;

int main()
{
   int me,nprocs;
   MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
	MPI_Comm_rank(MPI_COMM_WORLD, &me);

   FILE *fp = NULL;
   char *string;
   sprintf(string,"filename_proc%d",me);
   fp = fopen(string,"a");
   for (int i = 0; i < 10; i++) fprintf(fp,"i %d",i);
   fclose(fp);

   return 0;
}