void fun()
{
  int entity_9 = 26;
  int entity_0 = 8;
  char entity_1[58] = "";
  entity_1 = NULL;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_1, 'n', 58-1);
  entity_1[58-1]='';
  memset(entity_6, 'x', entity_9-1);
  entity_6[entity_9-1]='';
  entity_2 = (char*)malloc(29*sizeof(char));
  entity_2[29-1]='';
  entity_9 = 37;
  memcpy(entity_2, entity_6, entity_9*sizeof(char));
}