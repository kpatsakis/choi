void fun()
{
  int entity_5 = 27;
  char entity_2[45] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', 45-1);
  entity_2[45-1]='';
  entity_5 = 99;
  entity_2[entity_5] = 'q';
}