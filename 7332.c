void fun()
{
  int entity_8 = 47;
  char entity_9 = 'B';
  char* entity_3;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memset(entity_4, 'T', entity_8-1);
  entity_4[entity_8-1]='';
  entity_8 = 91;
  memcpy(entity_3, entity_4, entity_8*sizeof(char));
}