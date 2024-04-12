void fun()
{
  char entity_4[2] = "";
  memset(entity_4, 'B', 2-1);
  entity_4[2-1]='0';
  entity_4[64] = 'd';
}