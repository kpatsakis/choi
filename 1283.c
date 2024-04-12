void fun()
{
  int entity_2 = 46;
  entity_2 = 73;
  char entity_9 = 'P';
  char entity_6[89] = "";
  entity_6 = NULL;
  char* entity_3;
  memset(entity_6, 'O', 89-1);
  entity_6[89-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memcpy(entity_3, entity_6, 89*sizeof(char));
}