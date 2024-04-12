void fun()
{
  int entity_3 = 35;
  char* entity_7;
  char entity_8[71] = "";
  entity_8 = NULL;
  char* entity_5;
  char* entity_0;
  char entity_9[12] = "";
  entity_9 = NULL;
  memset(entity_8, 'X', 71-1);
  entity_8[71-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_9, 'e', 12-1);
  entity_9[12-1]='';
  entity_5 = (char*)malloc(51*sizeof(char));
  entity_5[51-1]='';
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[6-1]='';
  entity_3 = 33;
  memcpy(entity_7, entity_8, 71*sizeof(char));
}