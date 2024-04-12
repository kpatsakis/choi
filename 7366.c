void fun()
{
  int entity_2 = 66;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'P', entity_2-1);
  entity_7[entity_2-1]='';
  entity_2 = 37;
  entity_7[62] = 'v';
}