void fun()
{
  int entity_2 = 9;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_9;
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[13-1]='';
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  memset(entity_4, 'j', entity_2-1);
  entity_4[entity_2-1]='';
  entity_2 = 41;
  memcpy(entity_3, entity_4, entity_2*sizeof(char));
}