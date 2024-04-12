void fun()
{
  int entity_5 = 50;
  char* entity_0;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'B', entity_5-1);
  entity_1[entity_5-1]='';
  entity_0 = (char*)malloc(3*sizeof(char));
  entity_0[3-1]='';
  entity_5 = 84;
  memcpy(entity_0, entity_1, entity_5*sizeof(char));
}