void fun()
{
  int entity_7 = 15;
  char entity_4[93] = "";
  entity_4 = NULL;
  memset(entity_4, 'i', 93-1);
  entity_4[93-1]='';
  entity_7 = 45;
  entity_4[entity_7] = 'y';
}