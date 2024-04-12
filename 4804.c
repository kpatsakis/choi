void fun()
{
  int entity_8 = 71;
  char* entity_2;
  char* entity_9;
  char entity_7[89] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(71*sizeof(char));
  entity_9[71-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_7, 'D', 89-1);
  entity_7[89-1]='';
  entity_8 = 58;
  memcpy(entity_2, entity_7, 89*sizeof(char));
}