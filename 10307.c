void fun()
{
  char entity_2[19] = "";
  char entity_1[88] = "";
  char entity_3[37] = "";
  memset(entity_3, 'i', 37-1);
  entity_3[37-1]='0';
  memset(entity_2, 'A', 19-1);
  entity_2[19-1]='0';
  memset(entity_1, 'j', 88-1);
  entity_1[88-1]='0';
  entity_2[92] = 'q';
}