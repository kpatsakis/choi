void fun()
{
  char entity_5[19] = "";
  char entity_9[45] = "";
  memset(entity_5, 'L', 19-1);
  entity_5[19-1]='0';
  memset(entity_9, 'd', 45-1);
  entity_9[45-1]='0';
  entity_9[54] = 'b';
}