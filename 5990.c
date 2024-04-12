void fun()
{
  int entity_8 = 36;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_1;
  char* entity_7;
  entity_1 = (char*)malloc(75*sizeof(char));
  entity_1[75-1]='';
  entity_7 = (char*)malloc(7*sizeof(char));
  entity_7[7-1]='';
  memset(entity_4, 'w', entity_8-1);
  entity_4[entity_8-1]='';
  memcpy(entity_1, entity_4, entity_8*sizeof(char));
}