void fun()
{
  int entity_9 = 97;
  char* entity_4;
  char entity_1[97] = "";
  entity_1 = NULL;
  memset(entity_1, 'r', 97-1);
  entity_1[97-1]='';
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[78-1]='';
  strcpy(entity_4, entity_1);
}