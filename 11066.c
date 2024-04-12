void fun()
{
  char* entity_6;
  char entity_1[24] = "";
  char entity_2[38] = "";
  memset(entity_1, 'W', 24-1);
  entity_1[24-1]='0';
  entity_6 = (char*)malloc(25*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'k', 38-1);
  entity_2[38-1]='0';
  strcpy(entity_6, entity_1);
}