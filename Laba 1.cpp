# ��������  < mpi.h >
# ��������  < iostream >
# ��������  < cstdlib >
������������  �������� ����  std;
int  main(int argc, char** argv)
{
	MPI_Init(&argc, &argv); int ����, �����;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &�����);
	cout << " Hello MPI " << endl << " Rank - " << rank << " , Size- " << size << endl;
	MPI_Finalize();
	���������  0;
}