void fun()
{
  char entity_4[55] = "";
  memset(entity_4, 'z', 55-1);
  entity_4[55-1]='0';
  entity_4[50] = 'b';
}