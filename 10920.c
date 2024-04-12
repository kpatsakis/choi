void fun()
{
  char entity_4[27] = "";
  char entity_9[54] = "";
  memset(entity_4, 'q', 27-1);
  entity_4[27-1]='0';
  memset(entity_9, 'k', 54-1);
  entity_9[54-1]='0';
  entity_4[100] = 'Y';
}