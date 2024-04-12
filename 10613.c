void fun()
{
  int entity_5 = 77;
  char entity_3[56] = "";
  char entity_6[72] = "";
  char entity_1 = 'h';
  memset(entity_3, 'x', 56-1);
  entity_3[56-1]='0';
  memset(entity_6, 'x', 72-1);
  entity_6[72-1]='0';
  entity_3[91] = 'H';
}