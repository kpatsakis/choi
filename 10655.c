void fun()
{
  int entity_6 = 17;
  char entity_7[12] = "";
  char entity_4[32] = "";
  memset(entity_7, 'A', 12-1);
  entity_7[12-1]='0';
  memset(entity_4, 'D', 32-1);
  entity_4[32-1]='0';
  entity_7[50] = 'f';
}