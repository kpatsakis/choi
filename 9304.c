void fun()
{
  int entity_5 = 7;
  int entity_9 = 34;
  char entity_6[1] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_6, 'G', 1-1);
  entity_6[1-1]='';
  strcpy(entity_0, entity_6);
}