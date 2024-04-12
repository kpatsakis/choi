void fun()
{
  int entity_6 = 69;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_4;
  memset(entity_1, 'L', entity_6-1);
  entity_1[entity_6-1]='';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[32-1]='';
  memcpy(entity_4, entity_1, entity_6*sizeof(char));
}