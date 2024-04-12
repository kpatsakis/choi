void fun()
{
  char entity_2 = 'E';
  char* entity_6;
  char entity_3[63] = "";
  char* entity_7;
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[0]='0';
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'l', 63-1);
  entity_3[63-1]='0';
  strcpy(entity_6, entity_3);
}