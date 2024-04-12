void fun()
{
  int entity_4 = 83;
  char entity_0[65] = "";
  entity_0 = NULL;
  char entity_9 = 's';
  char* entity_5;
  memset(entity_0, 'V', 65-1);
  entity_0[65-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  strcpy(entity_5, entity_0);
}