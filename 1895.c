void fun()
{
  int entity_9 = 54;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'd', entity_9-1);
  entity_6[entity_9-1]='';
  entity_7 = (char*)malloc(68*sizeof(char));
  entity_7[68-1]='';
  memcpy(entity_7, entity_6, entity_9*sizeof(char));
}