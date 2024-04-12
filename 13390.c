void fun()
{
  int entity_8 = 39;
  char entity_6[entity_8] = "";
  char* entity_1;
  entity_1 = (char*)malloc(50*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'V', entity_8-1);
  entity_6[entity_8-1]='0';
  entity_8 = 49;
  memcpy(entity_1, entity_6, entity_8*sizeof(char));
}