void fun()
{
  int entity_8 = 67;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  memset(entity_6, 'C', entity_8-1);
  entity_6[entity_8-1]='';
  strcpy(entity_7, entity_6);
}