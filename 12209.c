void fun()
{
  int entity_5 = 5;
  int entity_9 = 40;
  int entity_1 = 8;
  char* entity_3;
  char entity_8[entity_1] = "";
  memset(entity_8, 'u', entity_1-1);
  entity_8[entity_1-1]='0';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_8, entity_1*sizeof(char));
}