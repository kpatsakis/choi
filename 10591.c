void fun()
{
  char entity_8[83] = "";
  char entity_4[90] = "";
  memset(entity_8, 'Z', 83-1);
  entity_8[83-1]='0';
  memset(entity_4, 'u', 90-1);
  entity_4[90-1]='0';
  entity_8[19] = 'T';
}