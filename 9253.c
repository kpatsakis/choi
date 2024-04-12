void fun()
{
  int entity_4 = 90;
  char entity_3[45] = "";
  entity_3 = NULL;
  memset(entity_3, 'N', 45-1);
  entity_3[45-1]='';
  entity_4 = 68;
  entity_3[entity_4] = 'x';
}