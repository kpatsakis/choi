void fun()
{
  int entity_8 = 76;
  char entity_5[84] = "";
  entity_5 = NULL;
  char* entity_7;
  char* entity_9;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_5, 'w', 84-1);
  entity_5[84-1]='';
  entity_9 = (char*)malloc(7*sizeof(char));
  entity_9[7-1]='';
  memcpy(entity_7, entity_5, 84*sizeof(char));
}