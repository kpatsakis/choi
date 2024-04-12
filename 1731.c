void fun()
{
  int entity_5 = 85;
  char entity_3[95] = "";
  entity_3 = NULL;
  char entity_0 = 'p';
  char* entity_7;
  char entity_8[24] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_3, 'Z', 95-1);
  entity_3[95-1]='';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_8, 'k', 24-1);
  entity_8[24-1]='';
  entity_5 = 87;
  memcpy(entity_7, entity_8, 24*sizeof(char));
}