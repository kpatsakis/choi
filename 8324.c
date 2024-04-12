void fun()
{
  char entity_2 = 'P';
  char entity_9[91] = "";
  entity_9 = NULL;
  char entity_4[24] = "";
  entity_4 = NULL;
  memset(entity_9, 'A', 91-1);
  entity_9[91-1]='';
  memset(entity_4, 'U', 24-1);
  entity_4[24-1]='';
  entity_9[42] = 'E';
}