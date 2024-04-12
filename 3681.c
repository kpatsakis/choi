void fun()
{
  char entity_8 = 'm';
  char entity_6[87] = "";
  entity_6 = NULL;
  char entity_9[31] = "";
  entity_9 = NULL;
  memset(entity_6, 'i', 87-1);
  entity_6[87-1]='';
  memset(entity_9, 'W', 31-1);
  entity_9[31-1]='';
  entity_9[21] = 'X';
}