void fun()
{
  char entity_2 = 'w';
  char entity_9[21] = "";
  entity_9 = NULL;
  memset(entity_9, 'W', 21-1);
  entity_9[21-1]='';
  entity_9[86] = 'G';
}