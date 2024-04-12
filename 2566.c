void fun()
{
  int entity_5 = 75;
  char* entity_9;
  char* entity_1;
  char entity_6[1] = "";
  entity_6 = NULL;
  char entity_3 = 't';
  memset(entity_6, 'o', 1-1);
  entity_6[1-1]='';
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[13-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memcpy(entity_1, entity_6, 1*sizeof(char));
}