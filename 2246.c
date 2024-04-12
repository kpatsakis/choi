void fun()
{
  int entity_4 = 98;
  char* entity_1;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char entity_0 = 'S';
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[92-1]='';
  memset(entity_5, 'V', entity_4-1);
  entity_5[entity_4-1]='';
  strcpy(entity_1, entity_5);
}