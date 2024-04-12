void fun()
{
  int entity_4 = 92;
  char* entity_3;
  char entity_7[53] = "";
  entity_7 = NULL;
  char entity_5 = 'Y';
  char entity_1[3] = "";
  entity_1 = NULL;
  memset(entity_7, 'G', 53-1);
  entity_7[53-1]='';
  memset(entity_1, 'L', 3-1);
  entity_1[3-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  entity_4 = 96;
  strcpy(entity_3, entity_7);
}