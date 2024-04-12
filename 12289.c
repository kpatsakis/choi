void fun()
{
  int entity_2 = 37;
  int entity_0 = 37;
  char entity_8[43] = "";
  char* entity_4;
  memset(entity_8, 'H', 43-1);
  entity_8[43-1]='0';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_8, 43*sizeof(char));
}