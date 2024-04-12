void fun()
{
  char entity_6[48] = "";
  char entity_5[19] = "";
  char entity_3[40] = "";
  char entity_4 = 'Y';
  memset(entity_5, 'V', 19-1);
  entity_5[19-1]='0';
  memset(entity_6, 'B', 48-1);
  entity_6[48-1]='0';
  memset(entity_3, 'W', 40-1);
  entity_3[40-1]='0';
  entity_6[100] = 'a';
}