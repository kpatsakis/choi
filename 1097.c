void fun()
{
  int entity_0 = 26;
  char entity_2[28] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_5[49] = "";
  entity_5 = NULL;
  memset(entity_2, 'h', 28-1);
  entity_2[28-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_5, 'x', 49-1);
  entity_5[49-1]='';
  memcpy(entity_3, entity_5, 49*sizeof(char));
}