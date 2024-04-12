void fun()
{
  int entity_6 = 76;
  entity_6 = 80;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'i', entity_6-1);
  entity_3[entity_6-1]='';
  entity_3[45] = 'm';
}