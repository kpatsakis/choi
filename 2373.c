void fun()
{
  int entity_1 = 41;
  char* entity_9;
  char* entity_5;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_8 = 'K';
  entity_5 = (char*)malloc(92*sizeof(char));
  entity_5[92-1]='';
  memset(entity_3, 'H', entity_1-1);
  entity_3[entity_1-1]='';
  entity_9 = (char*)malloc(91*sizeof(char));
  entity_9[91-1]='';
  memcpy(entity_9, entity_3, entity_1*sizeof(char));
}