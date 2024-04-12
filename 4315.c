void fun()
{
  int entity_2 = 82;
  char entity_5 = 't';
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'N', entity_2-1);
  entity_7[entity_2-1]='';
  entity_7[31] = 'A';
}