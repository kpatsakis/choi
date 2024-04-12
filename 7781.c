void fun()
{
  int entity_1 = 13;
  char entity_3 = 'z';
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_8, 'v', entity_1-1);
  entity_8[entity_1-1]='';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[92-1]='';
  strcpy(entity_9, entity_8);
}