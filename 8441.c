void fun()
{
  char* entity_8;
  char entity_7[1] = "";
  entity_7 = NULL;
  char entity_5[7] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_9[65] = "";
  entity_9 = NULL;
  memset(entity_9, 'B', 65-1);
  entity_9[65-1]='';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  entity_8 = (char*)malloc(47*sizeof(char));
  entity_8[47-1]='';
  memset(entity_7, 'c', 1-1);
  entity_7[1-1]='';
  memset(entity_5, 'F', 7-1);
  entity_5[7-1]='';
  strcpy(entity_0, entity_7);
}