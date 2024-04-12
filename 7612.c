void fun()
{
  int entity_8 = 56;
  entity_8 = 41;
  char* entity_1;
  char entity_2[78] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_2, 'W', 78-1);
  entity_2[78-1]='';
  strcpy(entity_1, entity_2);
}