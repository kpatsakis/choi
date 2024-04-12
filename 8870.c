void fun()
{
  int entity_7 = 24;
  char entity_8 = 'j';
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', entity_7-1);
  entity_4[entity_7-1]='';
  entity_7 = 32;
  entity_4[46] = 'k';
}