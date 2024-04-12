void fun()
{
  int entity_3 = 34;
  entity_3 = 100;
  char entity_6[78] = "";
  entity_6 = NULL;
  char entity_7 = 'n';
  char entity_2[87] = "";
  entity_2 = NULL;
  memset(entity_2, 'Z', 87-1);
  entity_2[87-1]='';
  memset(entity_6, 'W', 78-1);
  entity_6[78-1]='';
  entity_2[entity_3] = 'o';
}