void fun()
{
  int entity_7 = 90;
  char* entity_9;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  memset(entity_6, 'g', entity_7-1);
  entity_6[entity_7-1]='';
  entity_7 = 66;
  memcpy(entity_9, entity_6, entity_7*sizeof(char));
}