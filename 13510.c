void fun()
{
  int entity_5 = 51;
  entity_5 = 48;
  char entity_1[entity_5] = "";
  char* entity_8;
  memset(entity_1, 'F', entity_5-1);
  entity_1[entity_5-1]='0';
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_1, entity_5*sizeof(char));
}