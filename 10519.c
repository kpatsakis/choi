void fun()
{
  char entity_9[20] = "";
  memset(entity_9, 'z', 20-1);
  entity_9[20-1]='0';
  entity_9[45] = 'e';
}