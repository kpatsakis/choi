void fun()
{
  int entity_1 = 74;
  char entity_7[74] = "";
  char entity_5[43] = "";
  memset(entity_5, 'w', 43-1);
  entity_5[43-1]='0';
  memset(entity_7, 'v', 74-1);
  entity_7[74-1]='0';
  entity_5[58] = 'B';
}