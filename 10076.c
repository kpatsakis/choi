void fun()
{
  int entity_1 = 27;
  char entity_3[5] = "";
  char entity_7[95] = "";
  char entity_4 = 'U';
  memset(entity_7, 'D', 95-1);
  entity_7[95-1]='0';
  memset(entity_3, 'L', 5-1);
  entity_3[5-1]='0';
  entity_3[5] = 'r';
}