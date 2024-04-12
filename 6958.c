void fun()
{
  int entity_3 = 51;
  char* entity_1;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'U', entity_3-1);
  entity_5[entity_3-1]='';
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[92-1]='';
  strcpy(entity_1, entity_5);
}