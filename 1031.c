void fun()
{
  int entity_9 = 75;
  char entity_4 = 'I';
  char* entity_6;
  char entity_3[18] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_3, 'k', 18-1);
  entity_3[18-1]='';
  memcpy(entity_6, entity_3, 18*sizeof(char));
}