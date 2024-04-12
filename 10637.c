void fun()
{
  char entity_8[96] = "";
  memset(entity_8, 'b', 96-1);
  entity_8[96-1]='0';
  entity_8[5] = 'z';
}