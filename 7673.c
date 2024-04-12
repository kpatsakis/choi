void fun()
{
  int entity_7 = 84;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_1[97] = "";
  entity_1 = NULL;
  memset(entity_0, 'w', entity_7-1);
  entity_0[entity_7-1]='';
  memset(entity_1, 'R', 97-1);
  entity_1[97-1]='';
  entity_8 = (char*)malloc(92*sizeof(char));
  entity_8[92-1]='';
  strcpy(entity_8, entity_0);
}