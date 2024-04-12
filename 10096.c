void fun()
{
  char entity_8[6] = "";
  memset(entity_8, 'd', 6-1);
  entity_8[6-1]='0';
  entity_8[81] = 'd';
}