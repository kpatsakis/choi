void fun()
{
  int entity_2 = 92;
  entity_2 = 84;
  char entity_3[35] = "";
  entity_3 = NULL;
  memset(entity_3, 'V', 35-1);
  entity_3[35-1]='';
  entity_3[entity_2] = 'j';
}