void fun()
{
  int entity_1 = 9;
  char entity_2[85] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'p', 85-1);
  entity_2[85-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  entity_1 = 12;
  memcpy(entity_9, entity_2, 85*sizeof(char));
}