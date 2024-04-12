void fun()
{
  int entity_4 = 93;
  int entity_9 = 52;
  char entity_2[100] = "";
  entity_2 = NULL;
  char* entity_0;
  char* entity_8;
  memset(entity_2, 'H', 100-1);
  entity_2[100-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_8 = (char*)malloc(19*sizeof(char));
  entity_8[19-1]='';
  entity_9 = 10;
  memcpy(entity_0, entity_2, 100*sizeof(char));
}