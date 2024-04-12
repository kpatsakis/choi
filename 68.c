void fun()
{
  int entity_7 = 79;
  int entity_6 = 56;
  char* entity_1;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', entity_6-1);
  entity_8[entity_6-1]='';
  entity_1 = (char*)malloc(6*sizeof(char));
  entity_1[6-1]='';
  memcpy(entity_1, entity_8, entity_6*sizeof(char));
}