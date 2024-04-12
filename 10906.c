void fun()
{
  char entity_4[63] = "";
  char entity_6[35] = "";
  memset(entity_6, 'r', 35-1);
  entity_6[35-1]='0';
  memset(entity_4, 'v', 63-1);
  entity_4[63-1]='0';
  entity_6[64] = 'O';
}