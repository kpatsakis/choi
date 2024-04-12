void fun()
{
  char entity_9[65] = "";
  char entity_6[67] = "";
  memset(entity_9, 'M', 65-1);
  entity_9[65-1]='0';
  memset(entity_6, 'b', 67-1);
  entity_6[67-1]='0';
  entity_9[6] = 'd';
}