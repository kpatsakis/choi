void fun()
{
  int entity_0 = 24;
  entity_0 = 24;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_7;
  memset(entity_9, 'A', entity_0-1);
  entity_9[entity_0-1]='';
  entity_7 = (char*)malloc(32*sizeof(char));
  entity_7[32-1]='';
  strcpy(entity_7, entity_9);
}