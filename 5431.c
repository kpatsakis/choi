void fun()
{
  char entity_3[13] = "";
  entity_3 = NULL;
  char entity_9[55] = "";
  entity_9 = NULL;
  memset(entity_3, 'J', 13-1);
  entity_3[13-1]='';
  memset(entity_9, 'b', 55-1);
  entity_9[55-1]='';
  entity_3[27] = 'J';
}