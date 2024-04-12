void fun()
{
  int entity_5 = 20;
  char entity_1 = 'a';
  char* entity_2;
  char* entity_3;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[100-1]='';
  memset(entity_9, 'Q', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_2, entity_9, entity_5*sizeof(char));
}