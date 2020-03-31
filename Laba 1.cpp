# включати  < mpi.h >
# включити  < iostream >
# включати  < cstdlib >
використання  простору імен  std;
int  main(int argc, char** argv)
{
	MPI_Init(&argc, &argv); int ранг, розмір;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &розмір);
	cout << " Hello MPI " << endl << " Rank - " << rank << " , Size- " << size << endl;
	MPI_Finalize();
	повернути  0;
}