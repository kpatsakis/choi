void fun()
{
  int entity_9 = 66;
  int entity_7 = 28;
  char* entity_5;
  char* entity_1;
  char entity_2[43] = "";
  entity_2 = NULL;
  char entity_6[15] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[54-1]='';
  memset(entity_6, 'j', 15-1);
  entity_6[15-1]='';
  memset(entity_2, 'x', 43-1);
  entity_2[43-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memcpy(entity_1, entity_6, 15*sizeof(char));
}