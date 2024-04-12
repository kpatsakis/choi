void fun()
{
  int entity_1 = 98;
  char entity_4[85] = "";
  char* entity_6;
  char entity_8[17] = "";
  char entity_5 = 'F';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'Q', 85-1);
  entity_4[85-1]='0';
  memset(entity_8, 'I', 17-1);
  entity_8[17-1]='0';
  strcpy(entity_6, entity_8);
}