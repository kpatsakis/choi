void fun()
{
  int entity_7 = 64;
  char entity_9[87] = "";
  entity_9 = NULL;
  char entity_5 = 'o';
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_8;
  char* entity_6;
  memset(entity_9, 'a', 87-1);
  entity_9[87-1]='';
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[20-1]='';
  entity_6 = (char*)malloc(1*sizeof(char));
  entity_6[1-1]='';
  memset(entity_3, 'k', entity_7-1);
  entity_3[entity_7-1]='';
  memcpy(entity_6, entity_3, entity_7*sizeof(char));
}