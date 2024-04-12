void fun()
{
  int entity_8 = 95;
  char entity_5[45] = "";
  entity_5 = NULL;
  memset(entity_5, 'T', 45-1);
  entity_5[45-1]='';
  entity_5[entity_8] = 'A';
}