void fun()
{
  int entity_6 = 0;
  int entity_2 = 37;
  char* entity_4;
  char* entity_8;
  char entity_1[entity_2] = "";
  entity_4 = (char*)malloc(95*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'a', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_8 = (char*)malloc(57*sizeof(char));
  entity_8[0]='0';
  entity_2 = 55;
  memcpy(entity_8, entity_1, entity_2*sizeof(char));
}