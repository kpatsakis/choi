void fun()
{
  char entity_1[12] = "";
  char entity_2[22] = "";
  char entity_8 = 'J';
  memset(entity_2, 'V', 22-1);
  entity_2[22-1]='0';
  memset(entity_1, 'Z', 12-1);
  entity_1[12-1]='0';
  entity_2[61] = 'H';
}