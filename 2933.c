void fun()
{
  int entity_6 = 82;
  int entity_3 = 37;
  char entity_7 = 'f';
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'x', entity_3-1);
  entity_4[entity_3-1]='';
  entity_9 = (char*)malloc(92*sizeof(char));
  entity_9[92-1]='';
  memcpy(entity_9, entity_4, entity_3*sizeof(char));
}