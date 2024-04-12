void fun()
{
  int entity_0 = 23;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'P', entity_0-1);
  entity_9[entity_0-1]='';
  entity_4 = (char*)malloc(54*sizeof(char));
  entity_4[54-1]='';
  strcpy(entity_4, entity_9);
}