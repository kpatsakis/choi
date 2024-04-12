void fun()
{
  char entity_1[32] = "";
  memset(entity_1, 'X', 32-1);
  entity_1[32-1]='0';
  entity_1[84] = 'K';
}