void fun()
{
  int entity_0 = 85;
  int entity_2 = 41;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'I', entity_2-1);
  entity_4[entity_2-1]='';
  entity_7 = (char*)malloc(84*sizeof(char));
  entity_7[84-1]='';
  entity_2 = 78;
  strcpy(entity_7, entity_4);
}