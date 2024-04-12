void fun()
{
  int entity_1 = 61;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_9 = 'y';
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  memset(entity_2, 'c', entity_1-1);
  entity_2[entity_1-1]='';
  entity_1 = 14;
  memcpy(entity_4, entity_2, entity_1*sizeof(char));
}