void fun()
{
  int entity_5 = 33;
  char entity_3 = 'i';
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[52] = 'A';
}