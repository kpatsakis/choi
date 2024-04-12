void fun()
{
  int entity_9 = 11;
  entity_9 = 11;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char entity_6 = 'I';
  char* entity_0;
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  memset(entity_4, 'T', entity_9-1);
  entity_4[entity_9-1]='';
  strcpy(entity_0, entity_4);
}