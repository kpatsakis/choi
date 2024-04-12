void fun()
{
  char entity_3[20] = "";
  char entity_4[82] = "";
  memset(entity_3, 'o', 20-1);
  entity_3[20-1]='0';
  memset(entity_4, 'N', 82-1);
  entity_4[82-1]='0';
  entity_4[12] = 'a';
}