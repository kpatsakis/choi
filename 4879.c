void fun()
{
  int entity_5 = 73;
  int entity_4 = 3;
  int entity_9 = 38;
  char* entity_1;
  char entity_0[91] = "";
  entity_0 = NULL;
  memset(entity_0, 'i', 91-1);
  entity_0[91-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  strcpy(entity_1, entity_0);
}