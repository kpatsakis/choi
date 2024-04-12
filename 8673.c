void fun()
{
  int entity_4 = 39;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_1;
  char* entity_7;
  entity_7 = (char*)malloc(84*sizeof(char));
  entity_7[84-1]='';
  memset(entity_6, 'n', entity_4-1);
  entity_6[entity_4-1]='';
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  memcpy(entity_1, entity_6, entity_4*sizeof(char));
}