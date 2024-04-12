void fun()
{
  char entity_9[66] = "";
  entity_9 = NULL;
  char entity_6[11] = "";
  entity_6 = NULL;
  memset(entity_6, 'R', 11-1);
  entity_6[11-1]='';
  memset(entity_9, 'Z', 66-1);
  entity_9[66-1]='';
  entity_6[83] = 'a';
}