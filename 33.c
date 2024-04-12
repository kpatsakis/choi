void fun()
{
  int entity_7 = 66;
  int entity_0 = 35;
  entity_7 = 70;
  char* entity_8;
  char entity_9[43] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_9, 'j', 43-1);
  entity_9[43-1]='';
  strcpy(entity_8, entity_9);
}