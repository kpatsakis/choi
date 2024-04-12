void fun()
{
  int entity_9 = 9;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[22-1]='';
  memset(entity_2, 's', entity_9-1);
  entity_2[entity_9-1]='';
  memcpy(entity_7, entity_2, entity_9*sizeof(char));
}