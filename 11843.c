void fun()
{
  int entity_6 = 38;
  char entity_2 = 'l';
  char entity_1[58] = "";
  char* entity_4;
  char* entity_5;
  memset(entity_1, 'R', 58-1);
  entity_1[58-1]='0';
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[0]='0';
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_5, entity_1);
}