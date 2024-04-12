void fun()
{
  int entity_4 = 18;
  char entity_6 = 'E';
  char* entity_2;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[32-1]='';
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  memset(entity_8, 's', entity_4-1);
  entity_8[entity_4-1]='';
  strcpy(entity_2, entity_8);
}