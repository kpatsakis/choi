void fun()
{
  char entity_3[49] = "";
  entity_3 = NULL;
  memset(entity_3, 'R', 49-1);
  entity_3[49-1]='';
  entity_3[45] = 'a';
}