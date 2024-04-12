void fun()
{
  char entity_8[32] = "";
  entity_8 = NULL;
  memset(entity_8, 'B', 32-1);
  entity_8[32-1]='';
  entity_8[19] = 'n';
}