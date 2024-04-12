void fun()
{
  int entity_7 = 76;
  entity_7 = 23;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'L', entity_7-1);
  entity_8[entity_7-1]='';
  entity_8[89] = 'K';
}