void fun()
{
  int entity_1 = 42;
  char* entity_6;
  char entity_8[71] = "";
  entity_8 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_3;
  char* entity_2;
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[21-1]='';
  entity_2 = (char*)malloc(76*sizeof(char));
  entity_2[76-1]='';
  memset(entity_0, 'R', entity_1-1);
  entity_0[entity_1-1]='';
  memset(entity_8, 'w', 71-1);
  entity_8[71-1]='';
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[38-1]='';
  entity_1 = 41;
  memcpy(entity_2, entity_0, entity_1*sizeof(char));
}