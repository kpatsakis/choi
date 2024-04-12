void fun()
{
  char* entity_5;
  char* entity_4;
  char entity_9[96] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(21*sizeof(char));
  entity_4[21-1]='';
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[7-1]='';
  memset(entity_9, 'O', 96-1);
  entity_9[96-1]='';
  entity_9[30] = 'R';
}