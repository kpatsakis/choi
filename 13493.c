void fun()
{
  int entity_2 = 95;
  int entity_8 = 92;
  char* entity_6;
  char entity_1[58] = "";
  char entity_0 = 'i';
  memset(entity_1, 't', 58-1);
  entity_1[58-1]='0';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  entity_2 = 99;
  memcpy(entity_6, entity_1, 58*sizeof(char));
}