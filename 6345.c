void fun()
{
  int entity_3 = 82;
  char* entity_5;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(84*sizeof(char));
  entity_5[84-1]='';
  memset(entity_7, 'o', entity_3-1);
  entity_7[entity_3-1]='';
  strcpy(entity_5, entity_7);
}