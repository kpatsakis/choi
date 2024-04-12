void fun()
{
  int entity_9 = 17;
  char* entity_2;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_8 = 'F';
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[9-1]='';
  memset(entity_3, 'j', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_2, entity_3, entity_9*sizeof(char));
}