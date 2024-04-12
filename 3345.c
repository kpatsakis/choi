void fun()
{
  int entity_2 = 27;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', entity_2-1);
  entity_3[entity_2-1]='';
  entity_2 = 7;
  entity_3[68] = 'e';
}