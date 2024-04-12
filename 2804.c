void fun()
{
  int entity_7 = 42;
  char* entity_8;
  char entity_9[37] = "";
  entity_9 = NULL;
  char entity_4[85] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_4, 'S', 85-1);
  entity_4[85-1]='';
  memset(entity_9, 'S', 37-1);
  entity_9[37-1]='';
  entity_7 = 90;
  memcpy(entity_8, entity_4, 85*sizeof(char));
}