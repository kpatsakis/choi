void fun()
{
  int entity_4 = 56;
  char entity_6[22] = "";
  entity_6 = NULL;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_9 = 'm';
  memset(entity_5, 'G', entity_4-1);
  entity_5[entity_4-1]='';
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[82-1]='';
  memset(entity_6, 'x', 22-1);
  entity_6[22-1]='';
  strcpy(entity_0, entity_5);
}