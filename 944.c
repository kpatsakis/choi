void fun()
{
  int entity_5 = 72;
  char* entity_3;
  char* entity_9;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[92-1]='';
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[61-1]='';
  memset(entity_2, 'n', entity_5-1);
  entity_2[entity_5-1]='';
  entity_5 = 29;
  memcpy(entity_9, entity_2, entity_5*sizeof(char));
}