void fun()
{
  int entity_0 = 33;
  char* entity_3;
  char entity_9[4] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_1[0] = "";
  entity_1 = NULL;
  memset(entity_9, 'd', 4-1);
  entity_9[4-1]='';
  memset(entity_1, 'k', 0-1);
  entity_1[0-1]='';
  entity_3 = (char*)malloc(20*sizeof(char));
  entity_3[20-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memcpy(entity_7, entity_9, 4*sizeof(char));
}