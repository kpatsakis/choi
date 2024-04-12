void fun()
{
  int entity_0 = 9;
  entity_0 = 9;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'C', entity_0-1);
  entity_9[entity_0-1]='';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[39-1]='';
  strcpy(entity_4, entity_9);
}