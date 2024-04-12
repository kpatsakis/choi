void fun()
{
  int entity_2 = 91;
  int entity_6 = 49;
  char entity_9[88] = "";
  entity_9 = NULL;
  char entity_8 = 'S';
  char* entity_5;
  memset(entity_9, 'R', 88-1);
  entity_9[88-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memcpy(entity_5, entity_9, 88*sizeof(char));
}