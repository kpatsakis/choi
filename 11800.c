void fun()
{
  char* entity_3;
  char entity_1[44] = "";
  char* entity_4;
  char entity_6 = 'Y';
  char* entity_8;
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[0]='0';
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 't', 44-1);
  entity_1[44-1]='0';
  entity_8 = (char*)malloc(91*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_3, entity_1);
}