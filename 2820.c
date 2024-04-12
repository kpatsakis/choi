void fun()
{
  int entity_3 = 1;
  char entity_4 = 'A';
  char* entity_9;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(14*sizeof(char));
  entity_9[14-1]='';
  memset(entity_6, 'R', entity_3-1);
  entity_6[entity_3-1]='';
  memcpy(entity_9, entity_6, entity_3*sizeof(char));
}