void fun()
{
  int entity_2 = 37;
  int entity_0 = 76;
  entity_0 = 70;
  char* entity_9;
  char entity_8 = 'v';
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 'y', entity_0-1);
  entity_1[entity_0-1]='';
  entity_9 = (char*)malloc(26*sizeof(char));
  entity_9[26-1]='';
  memcpy(entity_9, entity_1, entity_0*sizeof(char));
}