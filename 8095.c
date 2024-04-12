void fun()
{
  int entity_8 = 69;
  char entity_1[97] = "";
  entity_1 = NULL;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'U', entity_8-1);
  entity_0[entity_8-1]='';
  memset(entity_1, 'o', 97-1);
  entity_1[97-1]='';
  entity_5 = (char*)malloc(81*sizeof(char));
  entity_5[81-1]='';
  entity_8 = 86;
  strcpy(entity_5, entity_0);
}