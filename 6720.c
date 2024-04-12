void fun()
{
  int entity_0 = 13;
  char entity_1[33] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 's', 33-1);
  entity_1[33-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  strcpy(entity_9, entity_1);
}