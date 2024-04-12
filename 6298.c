void fun()
{
  int entity_3 = 27;
  char entity_1[45] = "";
  entity_1 = NULL;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_1, 's', 45-1);
  entity_1[45-1]='';
  memset(entity_6, 'i', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[11] = 'u';
}