void fun()
{
  char entity_0[30] = "";
  char* entity_8;
  char* entity_5;
  char* entity_7;
  entity_5 = (char*)malloc(60*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'n', 30-1);
  entity_0[30-1]='0';
  entity_7 = (char*)malloc(62*sizeof(char));
  entity_7[0]='0';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_5, entity_0);
}