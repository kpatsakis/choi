void fun()
{
  int entity_6 = 42;
  char entity_7[13] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[96-1]='';
  memset(entity_7, 'U', 13-1);
  entity_7[13-1]='';
  memset(entity_0, 'M', entity_6-1);
  entity_0[entity_6-1]='';
  strcpy(entity_5, entity_0);
}