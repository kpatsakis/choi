void fun()
{
  int entity_7 = 10;
  int entity_4 = 44;
  char* entity_9;
  char entity_6[85] = "";
  entity_6 = NULL;
  memset(entity_6, 'G', 85-1);
  entity_6[85-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memcpy(entity_9, entity_6, 85*sizeof(char));
}