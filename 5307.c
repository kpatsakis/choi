void fun()
{
  int entity_8 = 12;
  char entity_9[84] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_4[43] = "";
  entity_4 = NULL;
  memset(entity_9, 'u', 84-1);
  entity_9[84-1]='';
  memset(entity_4, 'e', 43-1);
  entity_4[43-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  strcpy(entity_3, entity_9);
}