void fun()
{
  int entity_4 = 27;
  int entity_7 = 48;
  int entity_0 = 32;
  char entity_5[33] = "";
  char* entity_3;
  char* entity_8;
  memset(entity_5, 's', 33-1);
  entity_5[33-1]='0';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(36*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_8, entity_5);
}