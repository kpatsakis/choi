void fun()
{
  int entity_1 = 62;
  int entity_2 = 32;
  entity_1 = 5;
  char* entity_9;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_8, 'w', entity_1-1);
  entity_8[entity_1-1]='';
  entity_9 = (char*)malloc(38*sizeof(char));
  entity_9[38-1]='';
  memcpy(entity_9, entity_8, entity_1*sizeof(char));
}