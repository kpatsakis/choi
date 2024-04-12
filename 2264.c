void fun()
{
  int entity_5 = 80;
  int entity_0 = 65;
  char* entity_4;
  char entity_6[30] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[58-1]='';
  memset(entity_8, 'E', entity_5-1);
  entity_8[entity_5-1]='';
  memset(entity_6, 'u', 30-1);
  entity_6[30-1]='';
  strcpy(entity_1, entity_8);
}