void fun()
{
  int entity_5 = 71;
  int entity_1 = 74;
  char entity_4[22] = "";
  entity_4 = NULL;
  char entity_7[80] = "";
  entity_7 = NULL;
  char* entity_0;
  char* entity_9;
  memset(entity_7, 'b', 80-1);
  entity_7[80-1]='';
  entity_0 = (char*)malloc(47*sizeof(char));
  entity_0[47-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_4, 'D', 22-1);
  entity_4[22-1]='';
  memcpy(entity_9, entity_7, 80*sizeof(char));
}