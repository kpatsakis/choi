void fun()
{
  int entity_7 = 9;
  entity_7 = 9;
  char entity_1[7] = "";
  entity_1 = NULL;
  char* entity_6;
  char* entity_2;
  char* entity_8;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  entity_8 = (char*)malloc(83*sizeof(char));
  entity_8[83-1]='';
  entity_6 = (char*)malloc(12*sizeof(char));
  entity_6[12-1]='';
  memset(entity_1, 'h', 7-1);
  entity_1[7-1]='';
  memset(entity_0, 'k', entity_7-1);
  entity_0[entity_7-1]='';
  strcpy(entity_2, entity_0);
}