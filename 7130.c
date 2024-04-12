void fun()
{
  int entity_9 = 11;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_8[27] = "";
  entity_8 = NULL;
  memset(entity_3, 'a', entity_9-1);
  entity_3[entity_9-1]='';
  memset(entity_8, 'j', 27-1);
  entity_8[27-1]='';
  entity_3[54] = 'T';
}