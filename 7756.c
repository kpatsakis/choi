void fun()
{
  char entity_8[84] = "";
  entity_8 = NULL;
  memset(entity_8, 'n', 84-1);
  entity_8[84-1]='';
  entity_8[8] = 'x';
}