void fun()
{
  char entity_7[55] = "";
  char* entity_4;
  char* entity_8;
  memset(entity_7, 'y', 55-1);
  entity_7[55-1]='0';
  entity_8 = (char*)malloc(12*sizeof(char));
  entity_8[0]='0';
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_8, entity_7, 55*sizeof(char));
}