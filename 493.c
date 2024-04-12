void fun()
{
  int entity_0 = 29;
  char* entity_9;
  char entity_4[96] = "";
  entity_4 = NULL;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  memset(entity_8, 'P', entity_0-1);
  entity_8[entity_0-1]='';
  memset(entity_4, 'a', 96-1);
  entity_4[96-1]='';
  entity_0 = 31;
  strcpy(entity_9, entity_8);
}