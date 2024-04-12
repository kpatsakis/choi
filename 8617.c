void fun()
{
  int entity_4 = 87;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_1;
  char* entity_3;
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  entity_3 = (char*)malloc(25*sizeof(char));
  entity_3[25-1]='';
  memset(entity_7, 'h', entity_4-1);
  entity_7[entity_4-1]='';
  strcpy(entity_3, entity_7);
}