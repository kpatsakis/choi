void fun()
{
  int entity_9 = 97;
  char* entity_6;
  char entity_7[40] = "";
  entity_7 = NULL;
  memset(entity_7, 'q', 40-1);
  entity_7[40-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memcpy(entity_6, entity_7, 40*sizeof(char));
}