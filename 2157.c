void fun()
{
  int entity_5 = 15;
  char entity_3[54] = "";
  entity_3 = NULL;
  char entity_1[95] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'd', 95-1);
  entity_1[95-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_3, 'X', 54-1);
  entity_3[54-1]='';
  entity_5 = 66;
  strcpy(entity_8, entity_3);
}