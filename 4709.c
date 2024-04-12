void fun()
{
  int entity_0 = 4;
  int entity_9 = 32;
  char* entity_5;
  char* entity_7;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[22-1]='';
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[99-1]='';
  memset(entity_4, 'g', entity_0-1);
  entity_4[entity_0-1]='';
  entity_0 = 55;
  memcpy(entity_5, entity_4, entity_0*sizeof(char));
}