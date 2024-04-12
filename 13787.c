void fun()
{
  int entity_8 = 91;
  int entity_5 = 10;
  entity_8 = 10;
  char* entity_6;
  char* entity_4;
  char entity_1[entity_8] = "";
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 'o', entity_8-1);
  entity_1[entity_8-1]='0';
  entity_6 = (char*)malloc(31*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_1, entity_8*sizeof(char));
}