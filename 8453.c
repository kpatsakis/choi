void fun()
{
  int entity_4 = 47;
  int entity_6 = 43;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'P', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 34;
  entity_7[16] = 'J';
}