void fun()
{
  int entity_5 = 16;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'b', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[40] = 'i';
}