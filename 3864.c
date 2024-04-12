void fun()
{
  int entity_2 = 81;
  int entity_8 = 8;
  char* entity_4;
  char* entity_3;
  char entity_1[40] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[44-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_1, 'h', 40-1);
  entity_1[40-1]='';
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[13-1]='';
  strcpy(entity_3, entity_1);
}