void fun()
{
  int entity_1 = 29;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[92-1]='';
  memset(entity_5, 'U', entity_1-1);
  entity_5[entity_1-1]='';
  entity_5[52] = 'U';
}