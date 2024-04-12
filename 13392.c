void fun()
{
  int entity_0 = 74;
  int entity_1 = 29;
  entity_0 = 25;
  char entity_7[55] = "";
  char* entity_5;
  memset(entity_7, 'T', 55-1);
  entity_7[55-1]='0';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_7, 55*sizeof(char));
}