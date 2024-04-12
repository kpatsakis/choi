void fun()
{
  int entity_6 = 32;
  int entity_2 = 45;
  char entity_7[55] = "";
  char* entity_4;
  entity_4 = (char*)malloc(1*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'u', 55-1);
  entity_7[55-1]='0';
  memcpy(entity_4, entity_7, 55*sizeof(char));
}