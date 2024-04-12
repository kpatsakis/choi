void fun()
{
  int entity_1 = 3;
  int entity_2 = 1;
  entity_1 = 53;
  char entity_3[63] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_3, 'L', 63-1);
  entity_3[63-1]='';
  memcpy(entity_8, entity_3, 63*sizeof(char));
}