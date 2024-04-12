void fun()
{
  int entity_3 = 46;
  entity_3 = 97;
  char* entity_6;
  char entity_8 = 't';
  char* entity_4;
  char entity_5[25] = "";
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'H', 25-1);
  entity_5[25-1]='0';
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_4, entity_5);
}