void fun()
{
  char entity_8[4] = "";
  char entity_5 = 'Y';
  memset(entity_8, 'a', 4-1);
  entity_8[4-1]='0';
  entity_8[27] = 'Z';
}