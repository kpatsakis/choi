void fun()
{
  int entity_5 = 3;
  char entity_6[35] = "";
  char* entity_7;
  char entity_8[87] = "";
  char entity_1 = 'L';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 'w', 35-1);
  entity_6[35-1]='0';
  memset(entity_8, 'u', 87-1);
  entity_8[87-1]='0';
  entity_5 = 56;
  strcpy(entity_7, entity_8);
}