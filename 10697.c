void fun()
{
  char entity_9[81] = "";
  char entity_8[20] = "";
  memset(entity_9, 'E', 81-1);
  entity_9[81-1]='0';
  memset(entity_8, 'Z', 20-1);
  entity_8[20-1]='0';
  entity_9[97] = 'Q';
}