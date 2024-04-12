void fun()
{
  int entity_4 = 49;
  int entity_9 = 16;
  entity_9 = 54;
  char* entity_0;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[10-1]='';
  memset(entity_6, 'v', entity_9-1);
  entity_6[entity_9-1]='';
  entity_6[30] = 'u';
}