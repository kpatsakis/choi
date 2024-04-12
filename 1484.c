void fun()
{
  int entity_1 = 94;
  entity_1 = 32;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[50-1]='';
  memset(entity_7, 'W', entity_1-1);
  entity_7[entity_1-1]='';
  memcpy(entity_8, entity_7, entity_1*sizeof(char));
}