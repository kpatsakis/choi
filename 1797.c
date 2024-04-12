void fun()
{
  char* entity_9;
  char entity_1[97] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(32*sizeof(char));
  entity_9[32-1]='';
  memset(entity_1, 'p', 97-1);
  entity_1[97-1]='';
  memcpy(entity_9, entity_1, 97*sizeof(char));
}