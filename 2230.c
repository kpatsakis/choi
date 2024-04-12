void fun()
{
  char entity_0[11] = "";
  entity_0 = NULL;
  char entity_1[27] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_9[81] = "";
  entity_9 = NULL;
  memset(entity_1, 'U', 27-1);
  entity_1[27-1]='';
  memset(entity_9, 'F', 81-1);
  entity_9[81-1]='';
  memset(entity_0, 'l', 11-1);
  entity_0[11-1]='';
  entity_5 = (char*)malloc(77*sizeof(char));
  entity_5[77-1]='';
  strcpy(entity_5, entity_1);
}