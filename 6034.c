void fun()
{
  int entity_5 = 95;
  char entity_7[97] = "";
  entity_7 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_7, 'X', 97-1);
  entity_7[97-1]='';
  entity_5 = 92;
  memcpy(entity_1, entity_7, 97*sizeof(char));
}