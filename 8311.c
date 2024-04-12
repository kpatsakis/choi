void fun()
{
  int entity_7 = 97;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(41*sizeof(char));
  entity_6[41-1]='';
  memset(entity_9, 'r', entity_7-1);
  entity_9[entity_7-1]='';
  memcpy(entity_6, entity_9, entity_7*sizeof(char));
}