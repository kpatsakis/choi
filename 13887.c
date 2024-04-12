void fun()
{
  int entity_7 = 69;
  int entity_8 = 13;
  char* entity_4;
  char entity_2[entity_8] = "";
  char* entity_5;
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[0]='0';
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'f', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_8 = 100;
  memcpy(entity_5, entity_2, entity_8*sizeof(char));
}