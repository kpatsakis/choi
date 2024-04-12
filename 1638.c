void fun()
{
  int entity_8 = 12;
  char entity_6[8] = "";
  entity_6 = NULL;
  char* entity_1;
  char* entity_9;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[60-1]='';
  memset(entity_6, 'r', 8-1);
  entity_6[8-1]='';
  entity_8 = 95;
  memcpy(entity_1, entity_6, 8*sizeof(char));
}