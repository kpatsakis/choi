void fun()
{
  int entity_9 = 19;
  entity_9 = 68;
  char entity_2[35] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_2, 'R', 35-1);
  entity_2[35-1]='';
  memcpy(entity_7, entity_2, 35*sizeof(char));
}