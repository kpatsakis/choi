void fun()
{
  int entity_3 = 78;
  char* entity_9;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_7, 'V', entity_3-1);
  entity_7[entity_3-1]='';
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[36-1]='';
  entity_3 = 76;
  memcpy(entity_9, entity_7, entity_3*sizeof(char));
}