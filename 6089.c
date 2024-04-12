void fun()
{
  int entity_8 = 100;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'j', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[68] = 'G';
}