void fun()
{
  int entity_0 = 48;
  entity_0 = 84;
  char* entity_8;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char entity_4[93] = "";
  entity_4 = NULL;
  memset(entity_9, 'c', entity_0-1);
  entity_9[entity_0-1]='';
  memset(entity_4, 'Y', 93-1);
  entity_4[93-1]='';
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[8-1]='';
  entity_9[10] = 'u';
}