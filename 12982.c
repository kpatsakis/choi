void fun()
{
  int entity_2 = 43;
  int entity_4 = 32;
  char* entity_1;
  char entity_5[39] = "";
  char entity_3[2] = "";
  memset(entity_3, 'j', 2-1);
  entity_3[2-1]='0';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'u', 39-1);
  entity_5[39-1]='0';
  memcpy(entity_1, entity_5, 39*sizeof(char));
}