void fun()
{
  int entity_2 = 62;
  int entity_3 = 56;
  char entity_1[74] = "";
  entity_1 = NULL;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(2*sizeof(char));
  entity_7[2-1]='';
  memset(entity_1, 'C', 74-1);
  entity_1[74-1]='';
  memset(entity_9, 'j', entity_3-1);
  entity_9[entity_3-1]='';
  memcpy(entity_7, entity_9, entity_3*sizeof(char));
}