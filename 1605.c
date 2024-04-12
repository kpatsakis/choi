void fun()
{
  int entity_9 = 52;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'g', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[27] = 'k';
}