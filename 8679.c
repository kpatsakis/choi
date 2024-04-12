void fun()
{
  int entity_9 = 82;
  entity_9 = 45;
  char* entity_7;
  char entity_4 = 'a';
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'L', entity_9-1);
  entity_2[entity_9-1]='';
  entity_7 = (char*)malloc(67*sizeof(char));
  entity_7[67-1]='';
  memcpy(entity_7, entity_2, entity_9*sizeof(char));
}