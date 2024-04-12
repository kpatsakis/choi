void fun()
{
  int entity_9 = 80;
  char* entity_7;
  char entity_5[34] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_5, 'C', 34-1);
  entity_5[34-1]='';
  memcpy(entity_7, entity_5, 34*sizeof(char));
}