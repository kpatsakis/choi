void fun()
{
  char entity_3[67] = "";
  char entity_6[98] = "";
  memset(entity_6, 'C', 98-1);
  entity_6[98-1]='0';
  memset(entity_3, 'g', 67-1);
  entity_3[67-1]='0';
  entity_6[83] = 'P';
}