void fun()
{
  int entity_2 = 22;
  int entity_4 = 65;
  entity_4 = 63;
  char entity_3[98] = "";
  entity_3 = NULL;
  char entity_6[95] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_3, 'j', 98-1);
  entity_3[98-1]='';
  memset(entity_6, 'a', 95-1);
  entity_6[95-1]='';
  strcpy(entity_0, entity_6);
}