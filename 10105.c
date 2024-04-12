void fun()
{
  char entity_2[77] = "";
  char entity_8[61] = "";
  char entity_1[7] = "";
  memset(entity_1, 'E', 7-1);
  entity_1[7-1]='0';
  memset(entity_8, 'H', 61-1);
  entity_8[61-1]='0';
  memset(entity_2, 'U', 77-1);
  entity_2[77-1]='0';
  entity_2[48] = 'S';
}