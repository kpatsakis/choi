void fun()
{
  int entity_6 = 19;
  entity_6 = 76;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'a', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[27] = 'M';
}