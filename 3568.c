void fun()
{
  int entity_6 = 32;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'L', entity_6-1);
  entity_4[entity_6-1]='';
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[92-1]='';
  entity_6 = 57;
  strcpy(entity_1, entity_4);
}