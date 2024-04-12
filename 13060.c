void fun()
{
  int entity_0 = 95;
  char entity_5[8] = "";
  char* entity_6;
  char entity_8 = 'Q';
  char* entity_3;
  char* entity_7;
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[0]='0';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'W', 8-1);
  entity_5[8-1]='0';
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[0]='0';
  entity_0 = 56;
  strcpy(entity_7, entity_5);
}