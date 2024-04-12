void fun()
{
  int entity_0 = 32;
  entity_0 = 19;
  char entity_9[6] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'p', 6-1);
  entity_9[6-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  strcpy(entity_4, entity_9);
}