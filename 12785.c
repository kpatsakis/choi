void fun()
{
  int entity_2 = 80;
  char entity_7[85] = "";
  char* entity_3;
  char entity_1[55] = "";
  memset(entity_7, 'P', 85-1);
  entity_7[85-1]='0';
  memset(entity_1, 'c', 55-1);
  entity_1[55-1]='0';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_1, 55*sizeof(char));
}