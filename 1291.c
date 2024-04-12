void fun()
{
  int entity_0 = 28;
  int entity_1 = 42;
  char* entity_7;
  char entity_5 = 'g';
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'B', entity_0-1);
  entity_9[entity_0-1]='';
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  entity_3 = (char*)malloc(23*sizeof(char));
  entity_3[23-1]='';
  memcpy(entity_7, entity_9, entity_0*sizeof(char));
}