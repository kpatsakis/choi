void fun()
{
  char entity_4[47] = "";
  char entity_3[48] = "";
  memset(entity_4, 'M', 47-1);
  entity_4[47-1]='0';
  memset(entity_3, 'U', 48-1);
  entity_3[48-1]='0';
  entity_3[98] = 'U';
}