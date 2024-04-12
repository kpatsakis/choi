void fun()
{
  int entity_9 = 7;
  int entity_7 = 20;
  int entity_8 = 42;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'h', entity_9-1);
  entity_1[entity_9-1]='';
  entity_3 = (char*)malloc(53*sizeof(char));
  entity_3[53-1]='';
  memcpy(entity_3, entity_1, entity_9*sizeof(char));
}