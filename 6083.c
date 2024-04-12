void fun()
{
  int entity_6 = 68;
  int entity_9 = 38;
  char* entity_1;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char entity_3[85] = "";
  entity_3 = NULL;
  char entity_4 = 'r';
  memset(entity_3, 'R', 85-1);
  entity_3[85-1]='';
  memset(entity_0, 'Z', entity_9-1);
  entity_0[entity_9-1]='';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  memcpy(entity_1, entity_0, entity_9*sizeof(char));
}