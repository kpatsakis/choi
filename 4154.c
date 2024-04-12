void fun()
{
  int entity_8 = 34;
  entity_8 = 19;
  char entity_3[45] = "";
  entity_3 = NULL;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', entity_8-1);
  entity_4[entity_8-1]='';
  memset(entity_3, 'n', 45-1);
  entity_3[45-1]='';
  entity_4[15] = 'P';
}