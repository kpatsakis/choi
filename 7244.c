void fun()
{
  int entity_2 = 58;
  int entity_6 = 77;
  char* entity_5;
  char* entity_9;
  char entity_1[74] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_1, 'P', 74-1);
  entity_1[74-1]='';
  memcpy(entity_9, entity_1, 74*sizeof(char));
}