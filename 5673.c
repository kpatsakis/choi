void fun()
{
  char entity_8[65] = "";
  entity_8 = NULL;
  memset(entity_8, 'e', 65-1);
  entity_8[65-1]='';
  entity_8[74] = 'f';
}