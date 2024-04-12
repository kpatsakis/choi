void fun()
{
  int entity_3 = 14;
  char entity_7[65] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_6;
  char entity_2 = 'S';
  char* entity_8;
  entity_8 = (char*)malloc(6*sizeof(char));
  entity_8[6-1]='';
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[73-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_7, 'Q', 65-1);
  entity_7[65-1]='';
  entity_3 = 13;
  strcpy(entity_5, entity_7);
}