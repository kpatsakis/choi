void fun()
{
  int entity_3 = 26;
  entity_3 = 4;
  char entity_2[58] = "";
  entity_2 = NULL;
  char entity_0[86] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_2, 'v', 58-1);
  entity_2[58-1]='';
  memset(entity_0, 'w', 86-1);
  entity_0[86-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memcpy(entity_5, entity_2, 58*sizeof(char));
}