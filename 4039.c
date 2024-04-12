void fun()
{
  int entity_9 = 71;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char entity_8[5] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_0, 'T', entity_9-1);
  entity_0[entity_9-1]='';
  memset(entity_8, 'W', 5-1);
  entity_8[5-1]='';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  strcpy(entity_6, entity_0);
}