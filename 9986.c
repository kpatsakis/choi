void fun()
{
  int entity_1 = 31;
  entity_1 = 59;
  char* entity_0;
  char entity_8[8] = "";
  entity_8 = NULL;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_8, 'I', 8-1);
  entity_8[8-1]='';
  memset(entity_9, 'l', entity_1-1);
  entity_9[entity_1-1]='';
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[2-1]='';
  memcpy(entity_0, entity_9, entity_1*sizeof(char));
}