void fun()
{
  char entity_2[45] = "";
  entity_2 = NULL;
  memset(entity_2, 'e', 45-1);
  entity_2[45-1]='';
  entity_2[79] = 'd';
}