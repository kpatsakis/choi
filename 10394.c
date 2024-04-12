void fun()
{
  char entity_8[2] = "";
  memset(entity_8, 'H', 2-1);
  entity_8[2-1]='0';
  entity_8[100] = 'q';
}