void fun()
{
  int entity_9 = 80;
  char* entity_3;
  char* entity_0;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'D', entity_9-1);
  entity_4[entity_9-1]='';
  entity_0 = (char*)malloc(41*sizeof(char));
  entity_0[41-1]='';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  entity_9 = 85;
  memcpy(entity_0, entity_4, entity_9*sizeof(char));
}