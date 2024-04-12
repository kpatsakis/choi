void fun()
{
  int entity_1 = 37;
  char entity_4[45] = "";
  entity_4 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_8[19] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 19-1);
  entity_8[19-1]='';
  memset(entity_4, 'm', 45-1);
  entity_4[45-1]='';
  memset(entity_0, 'k', entity_1-1);
  entity_0[entity_1-1]='';
  entity_0[84] = 'e';
}