void fun()
{
  int entity_6 = 33;
  char entity_5[39] = "";
  char* entity_4;
  char* entity_8;
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'Y', 39-1);
  entity_5[39-1]='0';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_5, 39*sizeof(char));
}