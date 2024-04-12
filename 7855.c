void fun()
{
  int entity_3 = 16;
  char* entity_8;
  char* entity_2;
  char entity_6[39] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'e', 39-1);
  entity_6[39-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[71-1]='';
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  memcpy(entity_8, entity_6, 39*sizeof(char));
}