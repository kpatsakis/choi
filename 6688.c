void fun()
{
  int entity_0 = 66;
  entity_0 = 66;
  char* entity_1;
  char entity_4 = 'I';
  char* entity_8;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(84*sizeof(char));
  entity_1[84-1]='';
  memset(entity_3, 'y', entity_0-1);
  entity_3[entity_0-1]='';
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[67-1]='';
  strcpy(entity_1, entity_3);
}