void fun()
{
  int entity_1 = 74;
  int entity_9 = 40;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_8 = 'w';
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[33-1]='';
  memset(entity_0, 't', entity_1-1);
  entity_0[entity_1-1]='';
  memcpy(entity_3, entity_0, entity_1*sizeof(char));
}