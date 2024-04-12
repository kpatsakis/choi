void fun()
{
  int entity_3 = 16;
  entity_3 = 91;
  char entity_5 = 'm';
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_0, 'a', entity_3-1);
  entity_0[entity_3-1]='';
  entity_0[45] = 'T';
}