void fun()
{
  int entity_1 = 6;
  char* entity_8;
  char* entity_5;
  char entity_3[entity_1] = "";
  entity_8 = (char*)malloc(32*sizeof(char));
  entity_8[0]='0';
  entity_5 = (char*)malloc(3*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'Z', entity_1-1);
  entity_3[entity_1-1]='0';
  memcpy(entity_5, entity_3, entity_1*sizeof(char));
}