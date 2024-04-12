void fun()
{
  int entity_5 = 99;
  char* entity_7;
  char* entity_2;
  char entity_3[12] = "";
  memset(entity_3, 'x', 12-1);
  entity_3[12-1]='0';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[0]='0';
  entity_2 = (char*)malloc(80*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_7, entity_3);
}