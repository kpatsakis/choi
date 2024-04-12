void fun()
{
  int entity_0 = 90;
  char entity_1[36] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_1, 'K', 36-1);
  entity_1[36-1]='';
  entity_0 = 49;
  strcpy(entity_9, entity_1);
}