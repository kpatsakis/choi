void fun()
{
  int entity_5 = 71;
  char* entity_9;
  char* entity_1;
  char entity_2[13] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  entity_9 = (char*)malloc(40*sizeof(char));
  entity_9[40-1]='';
  memset(entity_2, 'O', 13-1);
  entity_2[13-1]='';
  entity_5 = 55;
  memcpy(entity_1, entity_2, 13*sizeof(char));
}