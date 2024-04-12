void fun()
{
  int entity_3 = 10;
  char entity_6[81] = "";
  char entity_7 = 'Q';
  char* entity_5;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'a', 81-1);
  entity_6[81-1]='0';
  entity_3 = 50;
  memcpy(entity_5, entity_6, 81*sizeof(char));
}