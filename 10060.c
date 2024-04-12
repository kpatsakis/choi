void fun()
{
  char entity_5[56] = "";
  char entity_2[17] = "";
  char entity_4[24] = "";
  memset(entity_2, 'i', 17-1);
  entity_2[17-1]='0';
  memset(entity_4, 'D', 24-1);
  entity_4[24-1]='0';
  memset(entity_5, 'I', 56-1);
  entity_5[56-1]='0';
  entity_5[82] = 'o';
}