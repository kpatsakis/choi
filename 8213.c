void fun()
{
  char entity_0[44] = "";
  entity_0 = NULL;
  char entity_9[37] = "";
  entity_9 = NULL;
  memset(entity_0, 'N', 44-1);
  entity_0[44-1]='';
  memset(entity_9, 'X', 37-1);
  entity_9[37-1]='';
  entity_0[66] = 'Z';
}