void fun()
{
  int entity_1 = 10;
  int entity_7 = 11;
  int entity_6 = 24;
  char* entity_3;
  char entity_9[15] = "";
  entity_9 = NULL;
  char entity_2 = 'o';
  memset(entity_9, 'Q', 15-1);
  entity_9[15-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 53;
  memcpy(entity_3, entity_9, 15*sizeof(char));
}