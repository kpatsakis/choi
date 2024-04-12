void fun()
{
  int entity_7 = 78;
  char entity_2[85] = "";
  entity_2 = NULL;
  char entity_1[78] = "";
  entity_1 = NULL;
  memset(entity_2, 'e', 85-1);
  entity_2[85-1]='';
  memset(entity_1, 'g', 78-1);
  entity_1[78-1]='';
  entity_2[entity_7] = 'w';
}