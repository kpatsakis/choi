void fun()
{
  int entity_0 = 43;
  entity_0 = 70;
  char entity_3[18] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_3, 'R', 18-1);
  entity_3[18-1]='';
  memcpy(entity_9, entity_3, 18*sizeof(char));
}