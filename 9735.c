void fun()
{
  int entity_6 = 37;
  entity_6 = 89;
  char entity_5[14] = "";
  entity_5 = NULL;
  char entity_9[1] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_5, 'I', 14-1);
  entity_5[14-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_9, 'k', 1-1);
  entity_9[1-1]='';
  strcpy(entity_0, entity_9);
}