void fun()
{
  int entity_6 = 11;
  entity_6 = 41;
  char* entity_5;
  char entity_0 = 'B';
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  memset(entity_1, 'S', entity_6-1);
  entity_1[entity_6-1]='';
  memcpy(entity_5, entity_1, entity_6*sizeof(char));
}