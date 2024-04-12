void fun()
{
  int entity_5 = 86;
  int entity_2 = 25;
  char* entity_7;
  char entity_0 = 'M';
  char entity_9[6] = "";
  entity_9 = NULL;
  memset(entity_9, 'r', 6-1);
  entity_9[6-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  entity_5 = 43;
  memcpy(entity_7, entity_9, 6*sizeof(char));
}