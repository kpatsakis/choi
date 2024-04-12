void fun()
{
  char entity_4[26] = "";
  char entity_9[44] = "";
  char* entity_7;
  char* entity_0;
  char* entity_8;
  entity_8 = (char*)malloc(45*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'v', 26-1);
  entity_4[26-1]='0';
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[0]='0';
  memset(entity_9, 'a', 44-1);
  entity_9[44-1]='0';
  entity_7 = (char*)malloc(90*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_8, entity_4);
}