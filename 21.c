void fun()
{
  int entity_4 = 91;
  char entity_8[97] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_8, 'Y', 97-1);
  entity_8[97-1]='';
  memcpy(entity_2, entity_8, 97*sizeof(char));
}