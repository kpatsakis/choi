void fun()
{
  int entity_2 = 65;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_6;
  char* entity_3;
  entity_3 = (char*)malloc(80*sizeof(char));
  entity_3[80-1]='';
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[64-1]='';
  memset(entity_4, 'i', entity_2-1);
  entity_4[entity_2-1]='';
  strcpy(entity_3, entity_4);
}