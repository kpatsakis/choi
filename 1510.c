void fun()
{
  char entity_8[83] = "";
  entity_8 = NULL;
  memset(entity_8, 'N', 83-1);
  entity_8[83-1]='';
  entity_8[23] = 'Z';
}