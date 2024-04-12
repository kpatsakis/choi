void fun()
{
  int entity_7 = 29;
  char entity_3[7] = "";
  entity_3 = NULL;
  char* entity_1;
  char entity_8[4] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(39*sizeof(char));
  entity_1[39-1]='';
  memset(entity_8, 'l', 4-1);
  entity_8[4-1]='';
  memset(entity_3, 'y', 7-1);
  entity_3[7-1]='';
  memcpy(entity_1, entity_8, 4*sizeof(char));
}