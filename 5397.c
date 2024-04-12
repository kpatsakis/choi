void fun()
{
  int entity_1 = 72;
  char* entity_7;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_8;
  char* entity_6;
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[75-1]='';
  entity_7 = (char*)malloc(55*sizeof(char));
  entity_7[55-1]='';
  memset(entity_3, 'd', entity_1-1);
  entity_3[entity_1-1]='';
  entity_8 = (char*)malloc(70*sizeof(char));
  entity_8[70-1]='';
  strcpy(entity_8, entity_3);
}