void fun()
{
  int entity_5 = 77;
  int entity_6 = 33;
  char entity_1[94] = "";
  entity_1 = NULL;
  char entity_8[38] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', 38-1);
  entity_8[38-1]='';
  memset(entity_1, 'b', 94-1);
  entity_1[94-1]='';
  entity_6 = 60;
  entity_8[entity_6] = 'C';
}