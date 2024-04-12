void fun()
{
  int entity_5 = 47;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'S', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[59] = 'w';
}