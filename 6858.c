void fun()
{
  char entity_1[73] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_2[31] = "";
  entity_2 = NULL;
  memset(entity_2, 'T', 31-1);
  entity_2[31-1]='';
  memset(entity_1, 'g', 73-1);
  entity_1[73-1]='';
  entity_9 = (char*)malloc(10*sizeof(char));
  entity_9[10-1]='';
  strcpy(entity_9, entity_1);
}