void fun()
{
  int entity_6 = 96;
  int entity_8 = 27;
  char entity_4[entity_8] = "";
  char* entity_1;
  entity_1 = (char*)malloc(88*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 's', entity_8-1);
  entity_4[entity_8-1]='0';
  memcpy(entity_1, entity_4, entity_8*sizeof(char));
}