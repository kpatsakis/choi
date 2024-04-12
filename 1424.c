void fun()
{
  char entity_5[60] = "";
  entity_5 = NULL;
  char entity_9[79] = "";
  entity_9 = NULL;
  memset(entity_9, 'x', 79-1);
  entity_9[79-1]='';
  memset(entity_5, 'D', 60-1);
  entity_5[60-1]='';
  entity_5[44] = 'N';
}