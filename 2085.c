void fun()
{
  int entity_6 = 15;
  char entity_8[27] = "";
  entity_8 = NULL;
  char entity_2[15] = "";
  entity_2 = NULL;
  memset(entity_8, 'g', 27-1);
  entity_8[27-1]='';
  memset(entity_2, 'S', 15-1);
  entity_2[15-1]='';
  entity_2[entity_6] = 'I';
}