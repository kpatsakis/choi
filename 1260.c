void fun()
{
  int entity_9 = 40;
  char entity_2[73] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_2, 'd', 73-1);
  entity_2[73-1]='';
  memcpy(entity_1, entity_2, 73*sizeof(char));
}