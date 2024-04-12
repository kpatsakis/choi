void fun()
{
  int entity_0 = 63;
  char entity_9[14] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_9, 'G', 14-1);
  entity_9[14-1]='';
  strcpy(entity_7, entity_9);
}