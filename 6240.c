void fun()
{
  char entity_8[4] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 4-1);
  entity_8[4-1]='';
  entity_8[26] = 't';
}