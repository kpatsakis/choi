void fun()
{
  int entity_6 = 49;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  memset(entity_5, 'o', entity_6-1);
  entity_5[entity_6-1]='';
  entity_5[45] = 'C';
}