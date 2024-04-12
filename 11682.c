void fun()
{
  char* entity_1;
  char entity_7[93] = "";
  char entity_6 = 'I';
  char* entity_4;
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'y', 93-1);
  entity_7[93-1]='0';
  entity_4 = (char*)malloc(85*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_7);
}