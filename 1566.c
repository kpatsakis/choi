void fun()
{
  int entity_4 = 71;
  char* entity_3;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[34-1]='';
  memset(entity_9, 'F', entity_4-1);
  entity_9[entity_4-1]='';
  memcpy(entity_3, entity_9, entity_4*sizeof(char));
}