void fun()
{
  char entity_1[32] = "";
  char entity_4 = 'g';
  memset(entity_1, 'l', 32-1);
  entity_1[32-1]='0';
  entity_1[77] = 't';
}