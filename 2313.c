void fun()
{
  int entity_5 = 84;
  char entity_6[84] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'g', 84-1);
  entity_6[84-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memcpy(entity_4, entity_6, 84*sizeof(char));
}