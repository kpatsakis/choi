void fun()
{
  int entity_1 = 29;
  int entity_6 = 27;
  char* entity_8;
  char entity_7[18] = "";
  char entity_3[entity_1] = "";
  char* entity_5;
  entity_5 = (char*)malloc(68*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'Q', entity_1-1);
  entity_3[entity_1-1]='0';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'm', 18-1);
  entity_7[18-1]='0';
  memcpy(entity_5, entity_3, entity_1*sizeof(char));
}