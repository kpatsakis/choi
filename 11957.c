void fun()
{
  int entity_1 = 51;
  char entity_7[55] = "";
  char entity_5[85] = "";
  char* entity_0;
  memset(entity_5, 'q', 85-1);
  entity_5[85-1]='0';
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'o', 55-1);
  entity_7[55-1]='0';
  memcpy(entity_0, entity_7, 55*sizeof(char));
}