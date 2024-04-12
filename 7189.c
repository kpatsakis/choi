void fun()
{
  char entity_1[67] = "";
  entity_1 = NULL;
  memset(entity_1, 'p', 67-1);
  entity_1[67-1]='';
  entity_1[37] = 'm';
}