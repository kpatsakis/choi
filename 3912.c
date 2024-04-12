void fun()
{
  int entity_4 = 29;
  entity_4 = 93;
  char entity_8[76] = "";
  entity_8 = NULL;
  char* entity_5;
  char* entity_6;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'M', entity_4-1);
  entity_1[entity_4-1]='';
  memset(entity_8, 'h', 76-1);
  entity_8[76-1]='';
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[62-1]='';
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[18-1]='';
  memcpy(entity_5, entity_1, entity_4*sizeof(char));
}