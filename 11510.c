void fun()
{
  char entity_8[4] = "";
  char* entity_3;
  char* entity_2;
  char* entity_6;
  char* entity_1;
  entity_6 = (char*)malloc(45*sizeof(char));
  entity_6[0]='0';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[0]='0';
  entity_3 = (char*)malloc(43*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'V', 4-1);
  entity_8[4-1]='0';
  strcpy(entity_6, entity_8);
}