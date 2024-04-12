void fun()
{
  int entity_8 = 80;
  char* entity_9;
  char entity_2[89] = "";
  entity_2 = NULL;
  memset(entity_2, 'e', 89-1);
  entity_2[89-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memcpy(entity_9, entity_2, 89*sizeof(char));
}