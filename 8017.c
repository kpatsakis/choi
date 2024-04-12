void fun()
{
  int entity_2 = 9;
  char* entity_0;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'L', entity_2-1);
  entity_7[entity_2-1]='';
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  entity_0 = (char*)malloc(51*sizeof(char));
  entity_0[51-1]='';
  memcpy(entity_0, entity_7, entity_2*sizeof(char));
}