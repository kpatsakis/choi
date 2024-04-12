void fun()
{
  char* entity_1;
  char entity_2 = 'G';
  char entity_7 = 'Q';
  char entity_8[29] = "";
  char* entity_5;
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'Q', 29-1);
  entity_8[29-1]='0';
  entity_1 = (char*)malloc(71*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_5, entity_8);
}