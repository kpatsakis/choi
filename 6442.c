void fun()
{
  int entity_0 = 67;
  char entity_2[97] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_5 = 'c';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_2, 'o', 97-1);
  entity_2[97-1]='';
  memcpy(entity_7, entity_2, 97*sizeof(char));
}