void fun()
{
  int entity_6 = 44;
  char* entity_9;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'A', entity_6-1);
  entity_1[entity_6-1]='';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[92-1]='';
  memcpy(entity_9, entity_1, entity_6*sizeof(char));
}