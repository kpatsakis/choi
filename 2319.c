void fun()
{
  int entity_4 = 76;
  char entity_9[41] = "";
  entity_9 = NULL;
  char* entity_1;
  char entity_3 = 'D';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_9, 'M', 41-1);
  entity_9[41-1]='';
  entity_4 = 34;
  memcpy(entity_1, entity_9, 41*sizeof(char));
}