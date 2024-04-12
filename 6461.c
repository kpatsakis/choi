void fun()
{
  int entity_4 = 70;
  char entity_5 = 'Z';
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'u', entity_4-1);
  entity_2[entity_4-1]='';
  entity_4 = 12;
  entity_2[24] = 'I';
}