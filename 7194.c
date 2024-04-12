void fun()
{
  int entity_7 = 32;
  int entity_9 = 29;
  char* entity_6;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_8 = 'w';
  entity_6 = (char*)malloc(11*sizeof(char));
  entity_6[11-1]='';
  memset(entity_4, 'x', entity_9-1);
  entity_4[entity_9-1]='';
  entity_0 = (char*)malloc(22*sizeof(char));
  entity_0[22-1]='';
  memcpy(entity_6, entity_4, entity_9*sizeof(char));
}