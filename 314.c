void fun()
{
  int entity_6 = 58;
  char entity_5[45] = "";
  entity_5 = NULL;
  memset(entity_5, 'L', 45-1);
  entity_5[45-1]='';
  entity_5[entity_6] = 'B';
}