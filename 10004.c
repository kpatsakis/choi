void fun()
{
  char entity_8[2] = "";
  char entity_2[27] = "";
  memset(entity_2, 'q', 27-1);
  entity_2[27-1]='0';
  memset(entity_8, 'w', 2-1);
  entity_8[2-1]='0';
  entity_2[41] = 'f';
}