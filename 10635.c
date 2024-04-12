void fun()
{
  char entity_8[99] = "";
  char entity_9[34] = "";
  memset(entity_9, 'q', 34-1);
  entity_9[34-1]='0';
  memset(entity_8, 'N', 99-1);
  entity_8[99-1]='0';
  entity_9[7] = 'h';
}