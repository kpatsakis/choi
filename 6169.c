void fun()
{
  int entity_6 = 15;
  int entity_2 = 92;
  entity_6 = 55;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'V', entity_6-1);
  entity_3[entity_6-1]='';
  entity_3[92] = 'k';
}