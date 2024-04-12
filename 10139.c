void fun()
{
  char entity_1[90] = "";
  memset(entity_1, 'm', 90-1);
  entity_1[90-1]='0';
  entity_1[32] = 'U';
}