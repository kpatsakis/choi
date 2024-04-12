void fun()
{
  char entity_4 = 'Z';
  char entity_6[58] = "";
  char entity_8[26] = "";
  memset(entity_8, 'y', 26-1);
  entity_8[26-1]='0';
  memset(entity_6, 'f', 58-1);
  entity_6[58-1]='0';
  entity_8[97] = 'X';
}