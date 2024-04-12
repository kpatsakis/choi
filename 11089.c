void fun()
{
  char* entity_5;
  char* entity_6;
  char entity_1[23] = "";
  char* entity_2;
  entity_6 = (char*)malloc(45*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'g', 23-1);
  entity_1[23-1]='0';
  entity_2 = (char*)malloc(13*sizeof(char));
  entity_2[0]='0';
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_6, entity_1);
}