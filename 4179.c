void fun()
{
  int entity_3 = 82;
  int entity_2 = 2;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_4;
  char* entity_5;
  char entity_9[84] = "";
  entity_9 = NULL;
  memset(entity_9, 'U', 84-1);
  entity_9[84-1]='';
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[90-1]='';
  entity_5 = (char*)malloc(43*sizeof(char));
  entity_5[43-1]='';
  memset(entity_0, 'f', entity_3-1);
  entity_0[entity_3-1]='';
  memcpy(entity_4, entity_0, entity_3*sizeof(char));
}