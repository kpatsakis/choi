void fun()
{
  char entity_5[11] = "";
  memset(entity_5, 'x', 11-1);
  entity_5[11-1]='0';
  entity_5[64] = 'S';
}