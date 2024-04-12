void fun()
{
  int entity_4 = 30;
  entity_4 = 61;
  char entity_8[71] = "";
  entity_8 = NULL;
  char entity_3 = 'w';
  char* entity_5;
  char entity_6[63] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_8, 'Y', 71-1);
  entity_8[71-1]='';
  memset(entity_6, 'Y', 63-1);
  entity_6[63-1]='';
  entity_1 = (char*)malloc(37*sizeof(char));
  entity_1[37-1]='';
  strcpy(entity_5, entity_6);
}