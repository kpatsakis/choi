void fun()
{
  int entity_4 = 19;
  char* entity_5;
  char entity_1[37] = "";
  entity_1 = NULL;
  char entity_8[6] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_8, 'x', 6-1);
  entity_8[6-1]='';
  memset(entity_1, 'L', 37-1);
  entity_1[37-1]='';
  entity_4 = 30;
  memcpy(entity_5, entity_8, 6*sizeof(char));
}