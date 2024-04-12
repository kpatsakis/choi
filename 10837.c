void fun()
{
  char entity_1[26] = "";
  char entity_9[36] = "";
  memset(entity_1, 'Z', 26-1);
  entity_1[26-1]='0';
  memset(entity_9, 'm', 36-1);
  entity_9[36-1]='0';
  entity_9[14] = 'V';
}