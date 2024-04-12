void fun()
{
  int entity_4 = 37;
  char* entity_2;
  char* entity_5;
  char entity_8[24] = "";
  char entity_6[72] = "";
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'f', 72-1);
  entity_6[72-1]='0';
  memset(entity_8, 'Z', 24-1);
  entity_8[24-1]='0';
  entity_2 = (char*)malloc(8*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_5, entity_8);
}