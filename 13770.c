void fun()
{
  int entity_6 = 49;
  int entity_3 = 49;
  char entity_1[52] = "";
  char* entity_8;
  char* entity_0;
  entity_8 = (char*)malloc(80*sizeof(char));
  entity_8[0]='0';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'h', 52-1);
  entity_1[52-1]='0';
  entity_3 = 51;
  strcpy(entity_0, entity_1);
}