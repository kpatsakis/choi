void fun()
{
  int entity_6 = 10;
  int entity_0 = 64;
  entity_0 = 60;
  char* entity_2;
  char entity_4[47] = "";
  entity_4 = NULL;
  char entity_9[11] = "";
  entity_9 = NULL;
  memset(entity_9, 'U', 11-1);
  entity_9[11-1]='';
  memset(entity_4, 'w', 47-1);
  entity_4[47-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memcpy(entity_2, entity_4, 47*sizeof(char));
}