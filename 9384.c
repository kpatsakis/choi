void fun()
{
  int entity_0 = 31;
  entity_0 = 20;
  char* entity_8;
  char* entity_3;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  memset(entity_4, 'O', entity_0-1);
  entity_4[entity_0-1]='';
  memcpy(entity_3, entity_4, entity_0*sizeof(char));
}