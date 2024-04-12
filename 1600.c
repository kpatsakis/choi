void fun()
{
  int entity_6 = 44;
  int entity_4 = 65;
  int entity_5 = 38;
  entity_6 = 93;
  char* entity_9;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  memset(entity_3, 'Q', entity_6-1);
  entity_3[entity_6-1]='';
  entity_3[62] = 'E';
}