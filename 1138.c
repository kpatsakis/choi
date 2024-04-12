void fun()
{
  int entity_0 = 39;
  char entity_6 = 'u';
  char* entity_4;
  char* entity_8;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(91*sizeof(char));
  entity_4[91-1]='';
  entity_8 = (char*)malloc(28*sizeof(char));
  entity_8[28-1]='';
  memset(entity_1, 'A', entity_0-1);
  entity_1[entity_0-1]='';
  entity_0 = 94;
  memcpy(entity_4, entity_1, entity_0*sizeof(char));
}