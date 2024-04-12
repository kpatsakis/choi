void fun()
{
  int entity_2 = 15;
  char entity_6[60] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_6, 'G', 60-1);
  entity_6[60-1]='';
  memcpy(entity_1, entity_6, 60*sizeof(char));
}