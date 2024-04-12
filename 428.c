void fun()
{
  int entity_6 = 4;
  int entity_7 = 84;
  int entity_8 = 93;
  char entity_1[95] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_5[56] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_1, 't', 95-1);
  entity_1[95-1]='';
  memset(entity_5, 'g', 56-1);
  entity_5[56-1]='';
  memcpy(entity_4, entity_5, 56*sizeof(char));
}