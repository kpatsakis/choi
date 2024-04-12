void fun()
{
  char entity_1[15] = "";
  char entity_4[88] = "";
  char entity_5 = 'l';
  memset(entity_1, 'b', 15-1);
  entity_1[15-1]='0';
  memset(entity_4, 'y', 88-1);
  entity_4[88-1]='0';
  entity_1[84] = 'b';
}