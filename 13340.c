void fun()
{
  int entity_0 = 61;
  entity_0 = 53;
  char entity_7 = 'p';
  char entity_8[5] = "";
  char* entity_2;
  char* entity_6;
  memset(entity_8, 'L', 5-1);
  entity_8[5-1]='0';
  entity_2 = (char*)malloc(84*sizeof(char));
  entity_2[0]='0';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_8);
}