void fun()
{
  int entity_1 = 88;
  char entity_2 = 'Q';
  char* entity_8;
  char* entity_5;
  char entity_7[48] = "";
  memset(entity_7, 'W', 48-1);
  entity_7[48-1]='0';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[0]='0';
  entity_5 = (char*)malloc(55*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_8, entity_7, 48*sizeof(char));
}