void fun()
{
  int entity_6 = 23;
  char entity_9 = 'Q';
  char* entity_7;
  char entity_8[59] = "";
  char* entity_5;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'E', 59-1);
  entity_8[59-1]='0';
  memcpy(entity_7, entity_8, 59*sizeof(char));
}