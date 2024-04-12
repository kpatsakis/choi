void fun()
{
  int entity_9 = 47;
  char* entity_0;
  char entity_6[32] = "";
  entity_6 = NULL;
  memset(entity_6, 'S', 32-1);
  entity_6[32-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  strcpy(entity_0, entity_6);
}