void fun()
{
  int entity_0 = 75;
  int entity_8 = 2;
  int entity_3 = 38;
  char* entity_1;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', entity_0-1);
  entity_2[entity_0-1]='';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  strcpy(entity_1, entity_2);
}