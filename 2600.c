void fun()
{
  int entity_2 = 64;
  char* entity_1;
  char* entity_6;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  memset(entity_5, 'D', entity_2-1);
  entity_5[entity_2-1]='';
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[60-1]='';
  entity_2 = 28;
  memcpy(entity_1, entity_5, entity_2*sizeof(char));
}