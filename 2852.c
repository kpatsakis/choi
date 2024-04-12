void fun()
{
  int entity_1 = 38;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_4;
  char* entity_2;
  char* entity_7;
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[24-1]='';
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[4-1]='';
  memset(entity_6, 'p', entity_1-1);
  entity_6[entity_1-1]='';
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[73-1]='';
  entity_1 = 77;
  memcpy(entity_7, entity_6, entity_1*sizeof(char));
}