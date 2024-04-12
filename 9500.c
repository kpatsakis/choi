void fun()
{
  int entity_6 = 35;
  entity_6 = 32;
  char* entity_4;
  char entity_5[47] = "";
  entity_5 = NULL;
  char entity_9 = 'w';
  memset(entity_5, 'v', 47-1);
  entity_5[47-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memcpy(entity_4, entity_5, 47*sizeof(char));
}