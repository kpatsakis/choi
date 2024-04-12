void fun()
{
  char entity_9[92] = "";
  entity_9 = NULL;
  memset(entity_9, 'h', 92-1);
  entity_9[92-1]='';
  entity_9[42] = 'w';
}