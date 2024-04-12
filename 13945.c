void fun()
{
  int entity_6 = 92;
  entity_6 = 43;
  char entity_2[83] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'W', 83-1);
  entity_2[83-1]='0';
  memcpy(entity_8, entity_2, 83*sizeof(char));
}