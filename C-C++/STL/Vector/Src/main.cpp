// http://practice.geeksforgeeks.org/problems/c-stl-set-1-vector/1

/*You are required to complete below methods*/
bool ascending_comp (int i, int j) { return (i < j); }
bool descending_comp (int i, int j) { return (i > j); }


/*inserts an element x at 
the back of the vector A */
void add_to_vector(vector<int> &A,int x)
{
	//Your code here
	A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
	//Your code here
	sort(A.begin(), A.end(), ascending_comp);
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
	//Your code here
	reverse(A.begin(), A.end());
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	//Your code here
	return A.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
	//Your code here
	sort(A.begin(), A.end(), descending_comp);
}

/*prints space separated 
elements of vector A*/
void print_vector(vector<int> &A)
{
	//Your code here
	for(vector<int>::iterator it = A.begin(); it != A.end(); it++)
	{
		cout << *it << " ";
	}
}