void fun()
{
  int entity_4 = 80;
  char* entity_7;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_0, 't', entity_4-1);
  entity_0[entity_4-1]='';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[28-1]='';
  memcpy(entity_1, entity_0, entity_4*sizeof(char));
}