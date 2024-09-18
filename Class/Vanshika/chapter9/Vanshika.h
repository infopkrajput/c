void squareAndQueue(int,int *,int *);
void CalArea(int, float*);

void squareAndQueue(int n,int *a,int *b)
{
    *a = n * n;
    *b = n * n * n;
}  
void CalArea(int a, float*b)
{
    *b = 3.14*a*a;
}