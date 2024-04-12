void fun()
{
  int entity_3 = 19;
  entity_3 = 38;
  char* entity_1;
  char entity_9[91] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_9, 'u', 91-1);
  entity_9[91-1]='';
  strcpy(entity_1, entity_9);
}