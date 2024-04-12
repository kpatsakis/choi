void fun()
{
  int entity_1 = 23;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_0;
  char entity_8 = 'L';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[92-1]='';
  memset(entity_9, 'A', entity_1-1);
  entity_9[entity_1-1]='';
  memcpy(entity_0, entity_9, entity_1*sizeof(char));
}