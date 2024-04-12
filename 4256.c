void fun()
{
  int entity_6 = 45;
  char* entity_9;
  char entity_1[16] = "";
  entity_1 = NULL;
  memset(entity_1, 'p', 16-1);
  entity_1[16-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  entity_6 = 2;
  memcpy(entity_9, entity_1, 16*sizeof(char));
}