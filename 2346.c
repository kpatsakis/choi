void fun()
{
  int entity_9 = 18;
  char entity_8 = 's';
  char entity_1[79] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_0[22] = "";
  entity_0 = NULL;
  memset(entity_0, 'A', 22-1);
  entity_0[22-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memset(entity_1, 'z', 79-1);
  entity_1[79-1]='';
  memcpy(entity_4, entity_0, 22*sizeof(char));
}