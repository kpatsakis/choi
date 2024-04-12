void fun()
{
  int entity_3 = 51;
  char* entity_6;
  char entity_9[57] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  memset(entity_9, 'X', 57-1);
  entity_9[57-1]='';
  entity_3 = 43;
  memcpy(entity_6, entity_9, 57*sizeof(char));
}