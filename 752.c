void fun()
{
  int entity_7 = 35;
  char* entity_9;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'p', entity_7-1);
  entity_3[entity_7-1]='';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[92-1]='';
  memcpy(entity_9, entity_3, entity_7*sizeof(char));
}