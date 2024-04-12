void fun()
{
  int entity_0 = 85;
  char* entity_6;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'N', entity_0-1);
  entity_9[entity_0-1]='';
  entity_2 = (char*)malloc(31*sizeof(char));
  entity_2[31-1]='';
  entity_6 = (char*)malloc(25*sizeof(char));
  entity_6[25-1]='';
  memcpy(entity_6, entity_9, entity_0*sizeof(char));
}