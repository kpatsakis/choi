void fun()
{
  int entity_6 = 70;
  entity_6 = 27;
  char entity_4[26] = "";
  char* entity_8;
  char* entity_0;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'v', 26-1);
  entity_4[26-1]='0';
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_8, entity_4);
}