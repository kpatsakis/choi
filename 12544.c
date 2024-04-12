void fun()
{
  int entity_1 = 6;
  char entity_6[entity_1] = "";
  char* entity_7;
  char* entity_8;
  entity_7 = (char*)malloc(31*sizeof(char));
  entity_7[0]='0';
  memset(entity_6, 't', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_8 = (char*)malloc(12*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_7, entity_6, entity_1*sizeof(char));
}