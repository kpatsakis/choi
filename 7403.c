void fun()
{
  int entity_7 = 99;
  entity_7 = 57;
  char entity_1 = 'r';
  char* entity_9;
  char entity_4[73] = "";
  entity_4 = NULL;
  memset(entity_4, 'r', 73-1);
  entity_4[73-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memcpy(entity_9, entity_4, 73*sizeof(char));
}