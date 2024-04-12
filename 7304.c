void fun()
{
  char entity_9[49] = "";
  entity_9 = NULL;
  char entity_2 = 'w';
  char entity_3[52] = "";
  entity_3 = NULL;
  memset(entity_9, 'I', 49-1);
  entity_9[49-1]='';
  memset(entity_3, 'n', 52-1);
  entity_3[52-1]='';
  entity_3[54] = 'W';
}