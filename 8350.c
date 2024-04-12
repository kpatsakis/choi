void fun()
{
  int entity_2 = 39;
  char* entity_6;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[26-1]='';
  entity_6 = (char*)malloc(93*sizeof(char));
  entity_6[93-1]='';
  memset(entity_5, 'J', entity_2-1);
  entity_5[entity_2-1]='';
  memcpy(entity_6, entity_5, entity_2*sizeof(char));
}