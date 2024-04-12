void fun()
{
  int entity_0 = 12;
  char entity_4[70] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'm', 70-1);
  entity_4[70-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memcpy(entity_9, entity_4, 70*sizeof(char));
}