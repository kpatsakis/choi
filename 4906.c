void fun()
{
  int entity_1 = 11;
  char* entity_7;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_8, 'U', entity_1-1);
  entity_8[entity_1-1]='';
  entity_7 = (char*)malloc(69*sizeof(char));
  entity_7[69-1]='';
  memcpy(entity_7, entity_8, entity_1*sizeof(char));
}