void fun()
{
  int entity_9 = 11;
  char* entity_8;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char entity_0 = 'h';
  memset(entity_7, 'T', entity_9-1);
  entity_7[entity_9-1]='';
  entity_8 = (char*)malloc(32*sizeof(char));
  entity_8[32-1]='';
  strcpy(entity_8, entity_7);
}