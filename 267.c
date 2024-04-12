void fun()
{
  int entity_7 = 11;
  char* entity_0;
  char entity_9[55] = "";
  entity_9 = NULL;
  memset(entity_9, 'G', 55-1);
  entity_9[55-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  strcpy(entity_0, entity_9);
}