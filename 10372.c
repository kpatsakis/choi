void fun()
{
  char entity_9[10] = "";
  char entity_8[53] = "";
  memset(entity_9, 'A', 10-1);
  entity_9[10-1]='0';
  memset(entity_8, 'V', 53-1);
  entity_8[53-1]='0';
  entity_9[48] = 'W';
}