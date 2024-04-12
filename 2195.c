void fun()
{
  int entity_5 = 50;
  entity_5 = 50;
  char entity_3 = 'l';
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(84*sizeof(char));
  entity_7[84-1]='';
  memset(entity_8, 'O', entity_5-1);
  entity_8[entity_5-1]='';
  strcpy(entity_7, entity_8);
}