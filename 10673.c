void fun()
{
  char entity_2[91] = "";
  char entity_5[35] = "";
  memset(entity_5, 'Y', 35-1);
  entity_5[35-1]='0';
  memset(entity_2, 't', 91-1);
  entity_2[91-1]='0';
  entity_2[72] = 'T';
}