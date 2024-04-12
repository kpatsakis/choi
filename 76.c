void fun()
{
  int entity_3 = 46;
  char* entity_1;
  char entity_2[89] = "";
  entity_2 = NULL;
  char entity_9 = 'R';
  memset(entity_2, 'J', 89-1);
  entity_2[89-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memcpy(entity_1, entity_2, 89*sizeof(char));
}