void fun()
{
  int entity_0 = 96;
  char entity_6 = 'K';
  char* entity_5;
  char* entity_4;
  char entity_9[48] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_9, 'a', 48-1);
  entity_9[48-1]='';
  entity_5 = (char*)malloc(91*sizeof(char));
  entity_5[91-1]='';
  memcpy(entity_4, entity_9, 48*sizeof(char));
}