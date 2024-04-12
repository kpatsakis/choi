void fun()
{
  int entity_2 = 83;
  char* entity_9;
  char entity_6[98] = "";
  entity_6 = NULL;
  char entity_7 = 'M';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_6, 'M', 98-1);
  entity_6[98-1]='';
  memcpy(entity_9, entity_6, 98*sizeof(char));
}