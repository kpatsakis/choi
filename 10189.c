void fun()
{
  char entity_8[98] = "";
  memset(entity_8, 'I', 98-1);
  entity_8[98-1]='0';
  entity_8[14] = 'z';
}