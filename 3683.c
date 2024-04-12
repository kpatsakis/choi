void fun()
{
  int entity_9 = 100;
  int entity_6 = 9;
  char* entity_4;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(41*sizeof(char));
  entity_4[41-1]='';
  memset(entity_3, 'u', entity_9-1);
  entity_3[entity_9-1]='';
  entity_9 = 41;
  memcpy(entity_4, entity_3, entity_9*sizeof(char));
}