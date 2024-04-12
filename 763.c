void fun()
{
  int entity_1 = 8;
  entity_1 = 93;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'H', entity_1-1);
  entity_0[entity_1-1]='';
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[40-1]='';
  memcpy(entity_3, entity_0, entity_1*sizeof(char));
}