void fun()
{
  int entity_0 = 80;
  int entity_7 = 37;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_9;
  char* entity_3;
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  memset(entity_4, 'j', entity_7-1);
  entity_4[entity_7-1]='';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[16-1]='';
  entity_7 = 13;
  memcpy(entity_9, entity_4, entity_7*sizeof(char));
}