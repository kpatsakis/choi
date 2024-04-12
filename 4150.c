void fun()
{
  int entity_0 = 81;
  char* entity_4;
  char entity_9 = 'U';
  char entity_1[42] = "";
  entity_1 = NULL;
  char entity_3[13] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_1, 'R', 42-1);
  entity_1[42-1]='';
  memset(entity_3, 't', 13-1);
  entity_3[13-1]='';
  memcpy(entity_4, entity_3, 13*sizeof(char));
}