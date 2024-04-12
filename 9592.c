void fun()
{
  int entity_8 = 76;
  int entity_4 = 40;
  entity_8 = 17;
  char entity_2 = 'a';
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'f', entity_8-1);
  entity_1[entity_8-1]='';
  entity_1[21] = 't';
}