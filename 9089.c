void fun()
{
  int entity_0 = 6;
  entity_0 = 39;
  char* entity_9;
  char* entity_4;
  char entity_6[61] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  entity_9 = (char*)malloc(34*sizeof(char));
  entity_9[34-1]='';
  memset(entity_6, 'l', 61-1);
  entity_6[61-1]='';
  memcpy(entity_4, entity_6, 61*sizeof(char));
}