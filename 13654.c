void fun()
{
  int entity_6 = 5;
  char* entity_4;
  char entity_7 = 'P';
  char entity_1 = 'N';
  char entity_2[71] = "";
  char entity_3[86] = "";
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'h', 71-1);
  entity_2[71-1]='0';
  memset(entity_3, 'S', 86-1);
  entity_3[86-1]='0';
  entity_6 = 2;
  strcpy(entity_4, entity_3);
}