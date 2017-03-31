// http://practice.geeksforgeeks.org/problems/c-stl-set-3-map/1

/* Adds a value with key x and value y to the map*/
void add_value(map<int,int> &m,int x,int y)
{
    //Your code here
	map<int, int>::iterator it;
	it = m.find(x);

	if(it == m.end())
		m.insert(pair<int,int>(x,y));
	else
		it->second = y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
	//Your code here
	int iReturn = 0;

	map<int, int>::iterator it;
	it = m.find(x);

	if(it != m.end())
		iReturn = it->second;
	else
		iReturn = -1;

	return iReturn;
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int,int> &m)
{
	//Your code here
	for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << " " << it->second << " ";
	}
}