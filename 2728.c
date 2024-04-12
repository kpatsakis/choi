void fun()
{
  int entity_2 = 45;
  int entity_9 = 32;
  char* entity_5;
  char entity_1[97] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_1, 'b', 97-1);
  entity_1[97-1]='';
  memcpy(entity_5, entity_1, 97*sizeof(char));
}