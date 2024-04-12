void fun()
{
  char entity_4[77] = "";
  char entity_3[91] = "";
  memset(entity_4, 'd', 77-1);
  entity_4[77-1]='0';
  memset(entity_3, 'C', 91-1);
  entity_3[91-1]='0';
  entity_3[51] = 'K';
}