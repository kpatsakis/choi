void fun()
{
  int entity_3 = 33;
  char* entity_8;
  char entity_4[8] = "";
  char* entity_7;
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'L', 8-1);
  entity_4[8-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_4, 8*sizeof(char));
}