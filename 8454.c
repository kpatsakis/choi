void fun()
{
  int entity_5 = 99;
  char entity_3 = 'y';
  char entity_7 = 'l';
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'o', entity_5-1);
  entity_8[entity_5-1]='';
  entity_5 = 22;
  entity_8[45] = 'S';
}