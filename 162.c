void fun()
{
  int entity_7 = 9;
  char entity_1[48] = "";
  entity_1 = NULL;
  char entity_5[44] = "";
  entity_5 = NULL;
  char entity_8[88] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'a', 88-1);
  entity_8[88-1]='';
  memset(entity_5, 'J', 44-1);
  entity_5[44-1]='';
  memset(entity_1, 'S', 48-1);
  entity_1[48-1]='';
  entity_3 = (char*)malloc(54*sizeof(char));
  entity_3[54-1]='';
  memcpy(entity_3, entity_5, 44*sizeof(char));
}