void fun()
{
  int entity_5 = 32;
  int entity_6 = 5;
  int entity_7 = 52;
  char* entity_2;
  char entity_8[35] = "";
  char* entity_4;
  memset(entity_8, 'H', 35-1);
  entity_8[35-1]='0';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  entity_2 = (char*)malloc(91*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_4, entity_8);
}