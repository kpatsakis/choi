void fun()
{
  int entity_6 = 100;
  char entity_9[21] = "";
  entity_9 = NULL;
  char* entity_1;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  memset(entity_9, 'X', 21-1);
  entity_9[21-1]='';
  memset(entity_0, 'D', entity_6-1);
  entity_0[entity_6-1]='';
  entity_1 = (char*)malloc(89*sizeof(char));
  entity_1[89-1]='';
  memcpy(entity_1, entity_0, entity_6*sizeof(char));
}