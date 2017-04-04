// http://practice.geeksforgeeks.org/problems/c-stl-set-4-stack/1

/*You are required to complete below methods*/

/*the function pushes an element
x into the stack s */
void push(stack<int> &s,int x)
{
    //Your code here
    s.push(x);
}

/*pops the top element of the
stack and returns it */
int pop(stack<int> &s)
{
    //Your code here
    int iReturn = 0;
    
    if(s.empty() == true)
        iReturn = -1;
    else {
        iReturn = s.top();
        s.pop();    
    }
    return iReturn;
}

/*returns the size of the stack */
int getSize(stack<int> &s)
{
   //Your code here
   return s.size();
}

/*returns the top element 
of the stack */
int getTop(stack<int> &s)
{
   //Your code here
   int iReturn = 0;
   if(s.empty() == true)
    iReturn = -1;
    else {
        iReturn = s.top();
    }
   return iReturn;
}