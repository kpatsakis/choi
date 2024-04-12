void fun()
{
  int entity_0 = 75;
  char* entity_3;
  char entity_9[36] = "";
  entity_9 = NULL;
  memset(entity_9, 'B', 36-1);
  entity_9[36-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  strcpy(entity_3, entity_9);
}