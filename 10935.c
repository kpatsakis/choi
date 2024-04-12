void fun()
{
  char entity_2[39] = "";
  char entity_3[57] = "";
  memset(entity_2, 'Z', 39-1);
  entity_2[39-1]='0';
  memset(entity_3, 'k', 57-1);
  entity_3[57-1]='0';
  entity_2[75] = 'I';
}