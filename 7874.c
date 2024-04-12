void fun()
{
  int entity_4 = 17;
  int entity_2 = 97;
  char* entity_6;
  char entity_9[6] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_9, 'e', 6-1);
  entity_9[6-1]='';
  memcpy(entity_6, entity_9, 6*sizeof(char));
}