void fun()
{
  int entity_5 = 77;
  char* entity_2;
  char entity_6[97] = "";
  entity_6 = NULL;
  memset(entity_6, 'S', 97-1);
  entity_6[97-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memcpy(entity_2, entity_6, 97*sizeof(char));
}