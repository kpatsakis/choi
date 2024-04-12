void fun()
{
  int entity_5 = 42;
  char entity_4[70] = "";
  char entity_7 = 'R';
  char entity_1[16] = "";
  memset(entity_1, 'Z', 16-1);
  entity_1[16-1]='0';
  memset(entity_4, 'l', 70-1);
  entity_4[70-1]='0';
  entity_1[15] = 'x';
}