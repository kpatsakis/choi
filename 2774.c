void fun()
{
  char entity_9[68] = "";
  entity_9 = NULL;
  memset(entity_9, 'X', 68-1);
  entity_9[68-1]='';
  entity_9[48] = 'J';
}