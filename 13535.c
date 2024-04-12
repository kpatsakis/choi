void fun()
{
  int entity_9 = 3;
  char* entity_7;
  char entity_3[entity_9] = "";
  char* entity_0;
  memset(entity_3, 'f', entity_9-1);
  entity_3[entity_9-1]='0';
  entity_0 = (char*)malloc(53*sizeof(char));
  entity_0[0]='0';
  entity_7 = (char*)malloc(27*sizeof(char));
  entity_7[0]='0';
  entity_9 = 45;
  memcpy(entity_7, entity_3, entity_9*sizeof(char));
}