void fun()
{
  char entity_1[11] = "";
  char entity_2 = 'F';
  char entity_8[83] = "";
  memset(entity_8, 'E', 83-1);
  entity_8[83-1]='0';
  memset(entity_1, 'M', 11-1);
  entity_1[11-1]='0';
  entity_1[67] = 'V';
}