void fun()
{
  int entity_4 = 64;
  char entity_9[38] = "";
  entity_9 = NULL;
  char entity_2[53] = "";
  entity_2 = NULL;
  memset(entity_2, 's', 53-1);
  entity_2[53-1]='';
  memset(entity_9, 'X', 38-1);
  entity_9[38-1]='';
  entity_4 = 36;
  entity_9[entity_4] = 'J';
}