void fun()
{
  int entity_1 = 64;
  char entity_2[22] = "";
  entity_2 = NULL;
  char entity_9[100] = "";
  entity_9 = NULL;
  char* entity_0;
  char entity_3 = 'T';
  memset(entity_9, 'n', 100-1);
  entity_9[100-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_2, 'F', 22-1);
  entity_2[22-1]='';
  memcpy(entity_0, entity_9, 100*sizeof(char));
}