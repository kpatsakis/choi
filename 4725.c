void fun()
{
  int entity_8 = 7;
  int entity_7 = 97;
  char entity_1[55] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_0[100] = "";
  entity_0 = NULL;
  memset(entity_0, 'S', 100-1);
  entity_0[100-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_1, 'i', 55-1);
  entity_1[55-1]='';
  memcpy(entity_9, entity_0, 100*sizeof(char));
}