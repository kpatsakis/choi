void fun()
{
  int entity_8 = 53;
  int entity_9 = 24;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'T', entity_8-1);
  entity_0[entity_8-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  strcpy(entity_7, entity_0);
}