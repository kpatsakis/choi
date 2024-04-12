void fun()
{
  int entity_6 = 9;
  entity_6 = 73;
  char* entity_9;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', entity_6-1);
  entity_3[entity_6-1]='';
  entity_9 = (char*)malloc(21*sizeof(char));
  entity_9[21-1]='';
  memcpy(entity_9, entity_3, entity_6*sizeof(char));
}