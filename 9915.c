void fun()
{
  int entity_7 = 99;
  char* entity_0;
  char entity_9[91] = "";
  entity_9 = NULL;
  memset(entity_9, 'x', 91-1);
  entity_9[91-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  entity_7 = 48;
  strcpy(entity_0, entity_9);
}