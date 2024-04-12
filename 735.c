void fun()
{
  int entity_4 = 56;
  int entity_2 = 53;
  int entity_6 = 66;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'P', entity_4-1);
  entity_7[entity_4-1]='';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[92-1]='';
  strcpy(entity_9, entity_7);
}