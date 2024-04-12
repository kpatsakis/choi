void fun()
{
  int entity_8 = 87;
  int entity_5 = 79;
  char entity_4[25] = "";
  char* entity_2;
  memset(entity_4, 'Z', 25-1);
  entity_4[25-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_4, 25*sizeof(char));
}