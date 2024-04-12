void fun()
{
  char* entity_6;
  char* entity_4;
  char entity_8 = 'e';
  char entity_7[12] = "";
  entity_6 = (char*)malloc(12*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'q', 12-1);
  entity_7[12-1]='0';
  entity_4 = (char*)malloc(11*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_7);
}