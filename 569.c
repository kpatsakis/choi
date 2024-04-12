void fun()
{
  int entity_5 = 98;
  char* entity_7;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  memset(entity_8, 'O', entity_5-1);
  entity_8[entity_5-1]='';
  strcpy(entity_7, entity_8);
}