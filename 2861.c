void fun()
{
  int entity_1 = 35;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char entity_7[37] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_6, 'x', entity_1-1);
  entity_6[entity_1-1]='';
  memset(entity_7, 'A', 37-1);
  entity_7[37-1]='';
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[54-1]='';
  entity_1 = 23;
  memcpy(entity_9, entity_6, entity_1*sizeof(char));
}