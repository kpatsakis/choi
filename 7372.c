void fun()
{
  int entity_9 = 81;
  char entity_4[51] = "";
  entity_4 = NULL;
  char* entity_1;
  char* entity_2;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  entity_2 = (char*)malloc(73*sizeof(char));
  entity_2[73-1]='';
  memset(entity_4, 'j', 51-1);
  entity_4[51-1]='';
  entity_9 = 71;
  memcpy(entity_1, entity_4, 51*sizeof(char));
}