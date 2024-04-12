void fun()
{
  int entity_0 = 49;
  char* entity_5;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'n', entity_0-1);
  entity_9[entity_0-1]='';
  entity_5 = (char*)malloc(40*sizeof(char));
  entity_5[40-1]='';
  memcpy(entity_5, entity_9, entity_0*sizeof(char));
}