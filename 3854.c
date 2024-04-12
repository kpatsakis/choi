void fun()
{
  int entity_3 = 45;
  char entity_4[16] = "";
  entity_4 = NULL;
  char* entity_2;
  char* entity_9;
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_4, 'J', 16-1);
  entity_4[16-1]='';
  memcpy(entity_2, entity_4, 16*sizeof(char));
}