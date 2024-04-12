void fun()
{
  int entity_9 = 76;
  char entity_0[91] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_0, 'h', 91-1);
  entity_0[91-1]='';
  strcpy(entity_3, entity_0);
}