void fun()
{
  char entity_9[85] = "";
  char entity_8[75] = "";
  char entity_6[85] = "";
  memset(entity_6, 'D', 85-1);
  entity_6[85-1]='0';
  memset(entity_9, 'M', 85-1);
  entity_9[85-1]='0';
  memset(entity_8, 'd', 75-1);
  entity_8[75-1]='0';
  entity_9[70] = 'a';
}