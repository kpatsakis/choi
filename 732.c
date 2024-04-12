void fun()
{
  int entity_3 = 36;
  char* entity_9;
  char entity_1 = 'F';
  char entity_4[46] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_4, 'A', 46-1);
  entity_4[46-1]='';
  memcpy(entity_9, entity_4, 46*sizeof(char));
}