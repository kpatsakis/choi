void fun()
{
  char entity_9[13] = "";
  entity_9 = NULL;
  memset(entity_9, 's', 13-1);
  entity_9[13-1]='';
  entity_9[78] = 'm';
}