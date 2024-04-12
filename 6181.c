void fun()
{
  char entity_5[39] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'B', 39-1);
  entity_5[39-1]='';
  entity_9 = (char*)malloc(70*sizeof(char));
  entity_9[70-1]='';
  entity_5[64] = 'y';
}