void fun()
{
  int entity_4 = 66;
  int entity_9 = 34;
  char entity_2 = 'M';
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(79*sizeof(char));
  entity_7[79-1]='';
  memset(entity_6, 'J', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_7, entity_6, entity_4*sizeof(char));
}