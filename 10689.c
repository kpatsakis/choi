void fun()
{
  char entity_4[51] = "";
  char entity_6[24] = "";
  memset(entity_4, 'S', 51-1);
  entity_4[51-1]='0';
  memset(entity_6, 'T', 24-1);
  entity_6[24-1]='0';
  entity_6[54] = 'k';
}