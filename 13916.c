void fun()
{
  int entity_1 = 61;
  char entity_5[entity_1] = "";
  char* entity_8;
  entity_8 = (char*)malloc(47*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'n', entity_1-1);
  entity_5[entity_1-1]='0';
  entity_1 = 97;
  memcpy(entity_8, entity_5, entity_1*sizeof(char));
}