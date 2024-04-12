void fun()
{
  int entity_6 = 34;
  char* entity_7;
  char entity_4[97] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_4, 'f', 97-1);
  entity_4[97-1]='';
  memcpy(entity_7, entity_4, 97*sizeof(char));
}