void fun()
{
  int entity_9 = 36;
  char entity_3[8] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(45*sizeof(char));
  entity_0[45-1]='';
  memset(entity_3, 'A', 8-1);
  entity_3[8-1]='';
  memset(entity_5, 'r', entity_9-1);
  entity_5[entity_9-1]='';
  memcpy(entity_0, entity_5, entity_9*sizeof(char));
}