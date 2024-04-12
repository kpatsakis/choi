void fun()
{
  int entity_3 = 93;
  char* entity_0;
  char entity_9 = 'r';
  char entity_2[26] = "";
  entity_2 = NULL;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'l', entity_3-1);
  entity_1[entity_3-1]='';
  memset(entity_2, 'P', 26-1);
  entity_2[26-1]='';
  entity_0 = (char*)malloc(43*sizeof(char));
  entity_0[43-1]='';
  entity_3 = 74;
  memcpy(entity_0, entity_1, entity_3*sizeof(char));
}