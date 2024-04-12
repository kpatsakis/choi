void fun()
{
  int entity_5 = 41;
  char entity_9[30] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'P', 30-1);
  entity_9[30-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  strcpy(entity_0, entity_9);
}