void fun()
{
  char entity_2 = 'F';
  char entity_4[67] = "";
  entity_4 = NULL;
  char* entity_5;
  char* entity_3;
  entity_3 = (char*)malloc(2*sizeof(char));
  entity_3[2-1]='';
  entity_5 = (char*)malloc(21*sizeof(char));
  entity_5[21-1]='';
  memset(entity_4, 'S', 67-1);
  entity_4[67-1]='';
  entity_4[29] = 'l';
}