void fun()
{
  int entity_6 = 8;
  char entity_9[92] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'U', 92-1);
  entity_9[92-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 81;
  memcpy(entity_3, entity_9, 92*sizeof(char));
}