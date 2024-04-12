void fun()
{
  int entity_2 = 37;
  char* entity_4;
  char* entity_1;
  char entity_3 = 'w';
  char entity_7[81] = "";
  char entity_8[27] = "";
  memset(entity_7, 'q', 81-1);
  entity_7[81-1]='0';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'V', 27-1);
  entity_8[27-1]='0';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_1, entity_8, 27*sizeof(char));
}