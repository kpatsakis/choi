void fun()
{
  int entity_8 = 14;
  char* entity_5;
  char* entity_3;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_5 = (char*)malloc(2*sizeof(char));
  entity_5[2-1]='';
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[62-1]='';
  memset(entity_6, 'R', entity_8-1);
  entity_6[entity_8-1]='';
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[97-1]='';
  memcpy(entity_5, entity_6, entity_8*sizeof(char));
}