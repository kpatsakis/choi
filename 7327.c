void fun()
{
  int entity_0 = 92;
  char* entity_9;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  entity_9 = (char*)malloc(10*sizeof(char));
  entity_9[10-1]='';
  memset(entity_5, 'p', entity_0-1);
  entity_5[entity_0-1]='';
  memcpy(entity_9, entity_5, entity_0*sizeof(char));
}