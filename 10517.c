void fun()
{
  char entity_8[56] = "";
  memset(entity_8, 'w', 56-1);
  entity_8[56-1]='0';
  entity_8[85] = 'x';
}