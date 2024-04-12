void fun()
{
  int entity_9 = 62;
  entity_9 = 65;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memset(entity_2, 'Z', entity_9-1);
  entity_2[entity_9-1]='';
  memcpy(entity_3, entity_2, entity_9*sizeof(char));
}