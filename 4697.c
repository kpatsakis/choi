void fun()
{
  char entity_5[95] = "";
  entity_5 = NULL;
  char entity_6[95] = "";
  entity_6 = NULL;
  memset(entity_6, 'p', 95-1);
  entity_6[95-1]='';
  memset(entity_5, 'T', 95-1);
  entity_5[95-1]='';
  entity_6[4] = 'u';
}