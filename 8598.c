void fun()
{
  int entity_4 = 7;
  char* entity_2;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(45*sizeof(char));
  entity_0[45-1]='';
  memset(entity_9, 'S', entity_4-1);
  entity_9[entity_4-1]='';
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  memcpy(entity_2, entity_9, entity_4*sizeof(char));
}