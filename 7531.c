void fun()
{
  int entity_5 = 8;
  int entity_7 = 60;
  entity_5 = 29;
  char entity_2 = 'K';
  char* entity_8;
  char entity_9[58] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memset(entity_9, 'r', 58-1);
  entity_9[58-1]='';
  memcpy(entity_8, entity_9, 58*sizeof(char));
}