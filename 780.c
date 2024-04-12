void fun()
{
  int entity_7 = 41;
  int entity_5 = 8;
  char* entity_1;
  char* entity_6;
  char entity_3[31] = "";
  entity_3 = NULL;
  char entity_8[44] = "";
  entity_8 = NULL;
  memset(entity_8, 'u', 44-1);
  entity_8[44-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  entity_6 = (char*)malloc(47*sizeof(char));
  entity_6[47-1]='';
  memset(entity_3, 'C', 31-1);
  entity_3[31-1]='';
  entity_7 = 9;
  strcpy(entity_1, entity_3);
}