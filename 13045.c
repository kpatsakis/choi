void fun()
{
  int entity_4 = 87;
  entity_4 = 92;
  char* entity_7;
  char entity_1[3] = "";
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'H', 3-1);
  entity_1[3-1]='0';
  memcpy(entity_7, entity_1, 3*sizeof(char));
}