void fun()
{
  int entity_9 = 76;
  entity_9 = 27;
  char* entity_1;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[92-1]='';
  memset(entity_5, 'g', entity_9-1);
  entity_5[entity_9-1]='';
  memcpy(entity_1, entity_5, entity_9*sizeof(char));
}