void fun()
{
  int entity_7 = 97;
  int entity_8 = 3;
  char* entity_6;
  char entity_3[44] = "";
  entity_3 = NULL;
  char entity_5[65] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_6 = (char*)malloc(84*sizeof(char));
  entity_6[84-1]='';
  memset(entity_5, 'y', 65-1);
  entity_5[65-1]='';
  memset(entity_3, 'J', 44-1);
  entity_3[44-1]='';
  strcpy(entity_1, entity_3);
}