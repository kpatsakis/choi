void fun()
{
  int entity_8 = 71;
  int entity_0 = 81;
  char* entity_1;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'c', entity_0-1);
  entity_9[entity_0-1]='';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[28-1]='';
  memcpy(entity_1, entity_9, entity_0*sizeof(char));
}