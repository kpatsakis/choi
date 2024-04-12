void fun()
{
  char entity_9[92] = "";
  entity_9 = NULL;
  char entity_5 = 'p';
  memset(entity_9, 'x', 92-1);
  entity_9[92-1]='';
  entity_9[59] = 'V';
}