void fun()
{
  int entity_2 = 15;
  int entity_6 = 73;
  char entity_3[80] = "";
  entity_3 = NULL;
  char* entity_4;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char entity_8[30] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(8*sizeof(char));
  entity_4[8-1]='';
  memset(entity_1, 'z', entity_6-1);
  entity_1[entity_6-1]='';
  memset(entity_8, 'M', 30-1);
  entity_8[30-1]='';
  memset(entity_3, 'x', 80-1);
  entity_3[80-1]='';
  memcpy(entity_4, entity_1, entity_6*sizeof(char));
}