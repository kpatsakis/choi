void fun()
{
  char entity_4[45] = "";
  char entity_3[63] = "";
  char entity_9[22] = "";
  memset(entity_3, 'j', 63-1);
  entity_3[63-1]='0';
  memset(entity_4, 'a', 45-1);
  entity_4[45-1]='0';
  memset(entity_9, 'p', 22-1);
  entity_9[22-1]='0';
  entity_4[22] = 's';
}