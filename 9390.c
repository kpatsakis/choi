void fun()
{
  int entity_2 = 39;
  int entity_3 = 93;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char entity_8 = 'b';
  memset(entity_4, 'r', entity_3-1);
  entity_4[entity_3-1]='';
  entity_4[27] = 'Y';
}