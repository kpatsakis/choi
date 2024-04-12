void fun()
{
  char entity_8[41] = "";
  char entity_4[64] = "";
  memset(entity_4, 'X', 64-1);
  entity_4[64-1]='0';
  memset(entity_8, 'z', 41-1);
  entity_8[41-1]='0';
  entity_4[89] = 'a';
}