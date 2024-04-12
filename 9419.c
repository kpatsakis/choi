void fun()
{
  int entity_4 = 37;
  char entity_8[98] = "";
  entity_8 = NULL;
  char entity_5 = 'k';
  memset(entity_8, 'Z', 98-1);
  entity_8[98-1]='';
  entity_8[45] = 'W';
}