void fun()
{
  char entity_5[80] = "";
  char entity_0[14] = "";
  memset(entity_5, 'F', 80-1);
  entity_5[80-1]='0';
  memset(entity_0, 'v', 14-1);
  entity_0[14-1]='0';
  entity_5[42] = 'B';
}