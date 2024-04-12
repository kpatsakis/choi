void fun()
{
  char entity_3[82] = "";
  char entity_8 = 'l';
  char* entity_4;
  char* entity_5;
  char* entity_6;
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'I', 82-1);
  entity_3[82-1]='0';
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[0]='0';
  entity_4 = (char*)malloc(74*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_6, entity_3);
}