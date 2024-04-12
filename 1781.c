void fun()
{
  int entity_5 = 53;
  char* entity_9;
  char entity_3[25] = "";
  entity_3 = NULL;
  memset(entity_3, 'R', 25-1);
  entity_3[25-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memcpy(entity_9, entity_3, 25*sizeof(char));
}