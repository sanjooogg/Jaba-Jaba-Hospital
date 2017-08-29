//Creates horizontal rule
void hr(int i,char ch)
{
  for(int j=0;j<81;j++)
  {
    gotoxy(j,i);
    cout<<ch;
  }
}
//Creates Vertical Rule
void vr(int i,char ch)
{
  for(int j=0;j<25;j++)
  {
    gotoxy(i,j);
    cout<<ch;
  }
}
//Creates borders
void borders()
{
  char ch = '*';
  hr(0,ch);
  hr(25,ch);
  vr(0,ch);
  vr(81,ch);
}
//Center Functions
void center(char* word)
{
  int length = strlen(word);
  gotoxy(40.5 - length/2,12.5);
  cout<<word;
}
void center(char* word,int y)
{
  int length = strlen(word);
  gotoxy(40.5 - length/2,y);
  cout<<word;
}
//Display Menu
void createMenu(char* word)
{
  clrscr();
  borders();
  hr(4,'*');
  center(word,2);
}
/*
void createMenu(char* word,char* array[],int step)
{
  clrscr();
  borders();
  hr(4,'*');
  center(word,2);
  dispArray(array[],step,6)
}
*/
void errormsg(char* error)
{
  clrscr();
  borders();
  center(error);
  center("Press any key to continue...",17);
  getche();
}
void dispArray(char* array[],int step,int start)
{
  for(int i=0; i<strlen(array);i++)
  {
    center(array[i],start+(i*step));
  }
}