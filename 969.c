void fun()
{
  int entity_1 = 38;
  char* entity_2;
  char entity_3 = 'O';
  char* entity_8;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(80*sizeof(char));
  entity_8[80-1]='';
  memset(entity_7, 'I', entity_1-1);
  entity_7[entity_1-1]='';
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[83-1]='';
  entity_1 = 94;
  strcpy(entity_8, entity_7);
}